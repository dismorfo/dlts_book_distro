<?php

/**
 * A command-line Drupal script to create a dummy book
 * drush -r /Users/albertoortizflores/tools/sites/projects scr import_dummy_book.php
 */
if (function_exists('node_export_import')) {

  module_enable(array('dummy_book'));
  
  if (module_exists('dummy_book')) {

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
    
      $pages[$key] = node_export_import($node);
      
      if (isset($pages[$key]) && $pages[$key]['success'] == 1) {
      
        // load and save node; not sure why but node export is not getting the djakota values
        $update_node = node_load($pages[$key]['nids'][0]);

        node_submit($update_node);

        node_save($update_node);

      }
    
    }
  
  }

}