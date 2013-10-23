<?php

/*
 * Djatoka request
 * TODO: Think about the best way to make djatoka a small module and a class-like Apache Solr php client
 */
function dlts_image_djatoka_request($file) {

  $file = (object) $file;
  
  $service_url = variable_get('dlts_image_djatoka_service', '');
  
  if (!empty($service_url)) {
    $request = url( $service_url . '/resolver', array(
      'query' => array(
        'url_ver' => variable_get('dlts_image_openlayers_openurl', 'Z39.88-2004'),
        'svc_id' => variable_get('dlts_image_openlayer_metadaurl_service', 'info:lanl-repo/svc/getMetadata'),
        'rft_id' => file_create_url($file->uri),
      ),
      'absolute' => TRUE)
    );
  
    $response = drupal_http_request($request);
    
    dpm($response);
    
    if ($response->code == '200' && isset($response->data) ) {
      return drupal_json_decode($response->data);
    }

    else {
      watchdog('dlts_image', 'Error requesting image metadata from Djakota service (url @url). @message (error code @code). Please verify that the ' . l('DLTS Image', 'admin/config/media/dlts-image') . ' module is properly configured. ', array( '@message' => $response->error, '@code' => $response->code, '@url' => $request ), WATCHDOG_ERROR);
      return array(
        'message' => isset($response->status_message) ? $response->status_message : $response->error,
        'error' => $response->error,
        'code' => $response->code,
      );
    }
  }
  
  else {
  $msg = 'Error requesting image metadata from Djakota service. Please configure Djatoka Jpeg 2000 Image Server.';
    watchdog('dlts_image', $msg, array(), WATCHDOG_ERROR);
    return array(
      'message' => $msg,
      'error' => 404,
      'code' => 404,
    );
  }
}