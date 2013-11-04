<?php

/**
 * A command-line Drupal script to create a dummy book
 * drush -r /Users/albertoortizflores/tools/sites/books-1383319906 scr import_dummy_book.php
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
    $pages[] = node_export_import(file_get_contents($value->uri));
  }

}