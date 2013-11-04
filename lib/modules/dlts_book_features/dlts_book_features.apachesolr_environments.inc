<?php
/**
 * @file
 * dlts_book_features.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function dlts_book_features_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Discovery Apache Solr 3.x server';
  $environment->url = 'http://dev-discovery.dlib.nyu.edu:8080/solr3_discovery/core0';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'dlts_book_stitched_page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
