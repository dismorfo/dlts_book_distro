<?php

/**
 * A command-line Drupal script to create a dummy book
 * drush -r /Users/albertoortizflores/tools/sites/projects scr import_dummy_book.php
 * drush -r /Users/albertoortizflores/tools/sites/book_test --uri=http://localhost/book_test scr import_dummy_book.php
 */
 
if (function_exists('node_export_import')) {

  $collection = node_export_import(
    file_get_contents(__DIR__ . '/source/collection.xml')
  );

  (!isset($collection) || $collection['success'] != 1 ) ? exit : next;

  $book = node_export_import(
    file_get_contents(__DIR__ . '/source/book.xml')
  );

  (!isset($book) || $book['success'] != 1 ) ? exit : next;

  /** pages */
  $source = file_scan_directory( __DIR__ . '/source', '/page(.*)\.xml$/', array( 'recurse' => FALSE ));

  foreach ($source as $key => $value) {
    
    drush_print('Importing node ' . $value->uri);
    
    $node = file_get_contents($value->uri);
      
    $xml = simplexml_load_file($value->uri);
      
    $cropped_master_filename = (string)$xml->node->field_cropped_master->und->n0->filename;
      
    $cropped_master = add_file( __DIR__ . '/source/images/' . $cropped_master_filename);
      
    $xml->node->field_cropped_master->und->n0->fid = $cropped_master->fid; 

    $service_copy_filename = (string)$xml->node->field_service_copy->und->n0->filename;
      
    $service_copy = add_file( __DIR__ . '/source/images/' . $service_copy_filename);      
      
    $xml->node->field_service_copy->und->n0->filename = $service_copy->fid; 
    
    $pages[$key] = node_export_import($xml->asXML());
      
    if (isset($pages[$key]) && $pages[$key]['success'] == 1) {

      // load and save node; not sure why but node export is not getting the djakota values
      $update_node = node_load($pages[$key]['nids'][0]);

      node_submit($update_node);

      node_save($update_node);

    }
  
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