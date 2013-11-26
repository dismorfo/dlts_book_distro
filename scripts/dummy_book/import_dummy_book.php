<?php

/**
 * A command-line Drupal script to create a dummy book
 * drush -r /Users/albertoortizflores/tools/sites/book_test --user=1 --uri=http://localhost/book_test scr import_dummy_book.php
 */
 
if (function_exists('node_export_import')) {

  $collections_array = array();

  /** collections */
  $collections = file_scan_directory( __DIR__ . '/source/collections', '/(.*)\.xml$/', array('recurse' => FALSE ));
  
  foreach ($collections as $key => $value) {
    
    drush_print('Importing collection ' . $value->uri);
    
    $xml = simplexml_load_file($value->uri);
    
    $identifier= (string)$xml->node->field_identifier->und->n0->value;

    $collection = node_export_import(
      $xml->asXML()
    );
    
    if (isset($collection) && $collection['success'] == 1) {
      $collections_array[$identifier] = array(
        'nid' => $collection['nids'][0],
        'identifier' => $identifier
      );
    }

  }
  
  (empty($collections_array)) ? exit : next;
  
  $books_array = array();

  /** books */
  
  $books = file_scan_directory( __DIR__ . '/source/books', '//', array('recurse' => FALSE ));
  
  foreach ($books as $key => $value) {
  
    /** book */
    $book_xml = simplexml_load_file($value->uri . '/book.xml');
    
    $is_part_of_collection = (string)$book_xml->node->field_is_part_of_collection->und->n0->nid;
      
    $collection_node = get_collection($is_part_of_collection);
    
    $collection_node_nid = $collection_node->nid;
    
    $book_xml->node->field_is_part_of_collection->und->n0->nid = $collection_node_nid;
    
    $books_array = node_export_import(
      $book_xml->asXML()
    );
    
    /** book pages */
    $book_pages = file_scan_directory($value->uri, '/page(.*)\.xml$/', array('recurse' => FALSE));

    foreach ($book_pages as $key => $value) {

      drush_print('Importing node ' . $value->uri);

      /** book page */
      $book_page_xml = simplexml_load_file($value->uri);

      $field_book = (string)$book_page_xml->node->field_book->und->n0->nid;
      
      $book_node = get_book($field_book);
    
      $book_node_nid = $book_node->nid;
      
      $book_page_xml->node->field_book->und->n0->nid = $book_node_nid;
    
      $cropped_master_filename = (string)$book_page_xml->node->field_cropped_master->und->n0->filename;
      
      $cropped_master = add_file( __DIR__ . '/source/images/' . $cropped_master_filename);
      
      $book_page_xml->node->field_cropped_master->und->n0->fid = $cropped_master->fid; 

      $service_copy_filename = (string)$book_page_xml->node->field_service_copy->und->n0->filename;
      
      $service_copy = add_file( __DIR__ . '/source/images/' . $service_copy_filename);      
      
      $book_page_xml->node->field_service_copy->und->n0->filename = $service_copy->fid; 
    
      $pages[$key] = node_export_import($book_page_xml->asXML());
      
      if (isset($pages[$key]) && $pages[$key]['success'] == 1) {

        // load and save node; not sure why but node export is not getting the djakota values
        $update_node = node_load($pages[$key]['nids'][0]);

        node_submit($update_node);

        node_save($update_node);
        
      }

    }
        
  }

}

function get_collection($identifier) {
  $query = new EntityFieldQuery;
  
  $result = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'collection')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_identifier', 'value', $identifier, '=')
    ->execute();

  if (!empty($result['node'])) {
    /** 
     * bjh6: wrapped array_pop() around this. 
     * See: http://stackoverflow.com/questions/4798047/array-flipcan-only-flip-string-and-integer-values-in-drupaldefaultentitycont */

    $keys = array_keys($result['node']);    

    return node_load(
      array_pop($keys)
    );

  } else {
    /** If the query returns no result, there's no book with the given identifier. */
    return filter_xss($identifier);
  }
}

function get_book($identifier) {
  $query = new EntityFieldQuery;
  
  $result = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'dlts_book')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_identifier', 'value', $identifier, '=')
    ->execute();

  if (!empty($result['node'])) {
    /** 
     * bjh6: wrapped array_pop() around this. 
     * See: http://stackoverflow.com/questions/4798047/array-flipcan-only-flip-string-and-integer-values-in-drupaldefaultentitycont */

    $keys = array_keys($result['node']);    

    return node_load(
      array_pop($keys)
    );

  } else {
    /** If the query returns no result, there's no book with the given identifier. */
    return filter_xss($identifier);
  }
}
  
function add_file($path) {
  $file = (object)array(
    'uid' => 1,
    'uri' => $path,
    'filemime' => file_get_mimetype($path),
    'status' => 1,
  );
  $file = file_copy($file, 'public://', FILE_EXISTS_REPLACE);
  return $file;
}