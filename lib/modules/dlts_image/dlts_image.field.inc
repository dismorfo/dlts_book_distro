<?php

/**
 * @file
 * Implements DLTS Image widgets and formatters.
 *
 */
 
module_load_include('inc', 'dlts_image', 'dlts_image.djatoka');

function dlts_image_field_info() {
  return array(
    'dlts_image' => array(
      'label' => t('DLTS Image'),
      'description' => t('This field stores the ID of an image file as an integer value.'),
      'settings' => array(
        'uri_scheme' => variable_get('file_default_scheme', 'public'),
        'default_image' => 0,
        'display_field' => 0,
        'display_default' => 0,
      ),
      'instance_settings' => array(
        'file_extensions' => 'jp2 tif tiff',
        'file_directory' => '',
        'max_filesize' => '',
      ),
      'default_widget' => 'dlts_image',
      'default_formatter' => 'dlts_image_hires',
    ),
  );
}

/**
 * Implements hook_field_settings_form().
 * https://api.drupal.org/api/drupal/modules!field_ui!field_ui.api.php/function/hook_field_settings_form/7
 */
function dlts_image_field_settings_form($field, $instance, $has_data) {
  return file_field_settings_form($field, $instance, $has_data);
}

/**
 * Implements hook_field_instance_settings_form().
 */
function dlts_image_field_instance_settings_form($field, $instance) {

  // Use the file field instance settings form as a basis.
  $form = file_field_instance_settings_form($field, $instance);

  // Remove the description option.
  unset($form['description_field']);
  
  // Remove the file_extensions option, we only accept jp2, tif, tiff.
  unset($form['file_extensions']);
  
  return $form;
}

function dlts_image_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {

  // Add display_field setting to field because file_field_widget_form() assumes it is set.
  $field['settings']['display_field'] = 0;
  
  $elements = file_field_widget_form($form, $form_state, $field, $instance, $langcode, $items, $delta, $element);
  
  $settings = $instance['settings'];
  
  $supported_extensions = array('tiff', 'tif', 'jp2');
  
  foreach (element_children($elements) as $delta) {
    $elements[$delta]['#upload_validators']['file_validate_extensions'][0] = implode(' ', $supported_extensions);
    // Add all extra functionality provided by the image widget.
    $elements[$delta]['#process'][] = 'dlts_image_field_widget_process';
  }
  
  if ($field['cardinality'] == 1) {
    // If there's only one field, return it as delta 0.
    if (empty($elements[0]['#default_value']['fid'])) {
      $elements[0]['#description'] = theme('file_upload_help', array('description' => $instance['description'], 'upload_validators' => $elements[0]['#upload_validators']));
    }
  }
  else {
    $elements['#file_upload_description'] = theme('file_upload_help', array('upload_validators' => $elements[0]['#upload_validators']));
  }

  return $elements;
}

function dlts_image_field_load($entity_type, $entities, $field, $instances, $langcode, &$items, $age) {
  file_field_load($entity_type, $entities, $field, $instances, $langcode, $items, $age);
}

function dlts_image_field_widget_process($element, &$form_state, $form) {

  $item = $element['#value'];
  $item['fid'] = $element['fid']['#value'];
  $instance = field_widget_instance($element, $form_state);
  $settings = $instance['settings'];
  $widget_settings = $instance['widget']['settings'];
  
  $element['#theme'] = 'dlts_image_widget';
  
  // Add image CSS
  $element['#attached']['css'][] = drupal_get_path('module', 'image') . '/image.css';
  
  // Add the image preview.
  if ($element['#file']) {
  
    /**
     * Determine image dimensions and metadata
     * If djakota_*  is available, the others will also be available
     */
    if (isset($element['#value']['djakota_width'])) {
      $variables['djakota_width'] = $element['#value']['djakota_width'];
      $variables['djakota_height'] = $element['#value']['djakota_height'];
      $variables['djakota_levels'] = $element['#value']['djakota_levels'];
      $variables['djakota_dwtLevels'] = $element['#value']['djakota_dwtLevels'];
      $variables['djakota_compositingLayerCount'] = $element['#value']['djakota_compositingLayerCount'];
      $variables['width'] = $element['#value']['djakota_width'];
      $variables['height'] = $element['#value']['djakota_height'];
    }

    /**
     * Call Djakota Image Server
     */ 
    else {
    
      $djatoka = dlts_image_djatoka_request($element['#file']);
		
      if (!isset($djatoka['error'])) {
        $variables['djakota_width'] = $djatoka['width'];
        $variables['djakota_height'] = $djatoka['height'];
        $variables['djakota_levels'] = $djatoka['levels'];
        $variables['djakota_dwtLevels'] = $djatoka['dwtLevels'];
        $variables['djakota_compositingLayerCount'] = $djatoka['compositingLayerCount'];
		$variables['width'] = $djatoka['width'];
        $variables['height'] = $djatoka['height'];
      }
      else {
        form_set_error('dlts_image', t('Error requesting image metadata from Djakota service. @message (error code @code).', array('@message' => $djatoka['message'], '@error' => $djatoka['error'])));
      }
    }
    
    /** Store the metadata in the form */
    
    $element['width'] = array(
      '#type' => 'hidden',
      '#value' => $variables['width'],
    );

    $element['height'] = array(
      '#type' => 'hidden',
      '#value' => $variables['height'],
    );
    
    $element['djakota_width'] = array(
      '#type' => 'hidden',
      '#value' => $variables['djakota_width'],
    );
    
    $element['djakota_height'] = array(
      '#type' => 'hidden',
      '#value' => $variables['djakota_height'],
    );

    $element['djakota_levels'] = array(
      '#type' => 'hidden',
      '#value' => $variables['djakota_levels'],
    );

    $element['djakota_dwtLevels'] = array(
      '#type' => 'hidden',
      '#value' => $variables['djakota_dwtLevels'],
    );
    
    $element['djakota_compositingLayerCount'] = array(
      '#type' => 'hidden',
      '#value' => $variables['djakota_compositingLayerCount'],
    );

  }
  return $element;
}

/**
 * Implements hook_field_widget_info().
 */
  function dlts_image_field_widget_info() {
  return array(
    'dlts_image' => array(
      'label' => t('DLTS Image'),
      'field types' => array('dlts_image'),
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'none',
      ),
      'behaviors' => array(
        'multiple values' => FIELD_BEHAVIOR_CUSTOM,
        'default value' => FIELD_BEHAVIOR_NONE,
      ),
    ),
  );
}

/**
 * Implements hook_field_widget_settings_form().
 */
function dlts_image_field_widget_settings_form($field, $instance) {
  return file_field_widget_settings_form($field, $instance);
}

/**
 * Implements hook_field_formatter_info().
 */
function dlts_image_field_formatter_info() {
  return array(
    'dlts_image_hires' => array(
      'label' => t('DLTS Hi-Res Image'),
      'field types' => array('dlts_image'),
      'description' => t('Displays image files in their original size.'),
    ),
  );
}

/** 
 * Implements hook_field_formatter_view(). 
 */
function dlts_image_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  if ($display['type'] == 'dlts_image_hires') {
    foreach ($items as $delta => $item) {
        $element[$delta] = array(
          '#theme' => 'dlts_image_hires',
          '#file' => $item,
        );
    }  	
  }
  return $element;
}

/**
 * Implements hook_field_presave().
 */
function dlts_image_field_presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
  file_field_presave($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_insert().
 */
function dlts_image_field_insert($entity_type, $entity, $field, $instance, $langcode, &$items) {
  file_field_insert($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_update().
 */
function dlts_image_field_update($entity_type, $entity, $field, $instance, $langcode, &$items) {
  file_field_update($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_delete().
 */
function dlts_image_field_delete($entity_type, $entity, $field, $instance, $langcode, &$items) {
  file_field_delete($entity_type, $entity, $field, $instance, $langcode, $items);
}

/**
 * Implements hook_field_delete_revision().
 */
function dlts_image_field_delete_revision($entity_type, $entity, $field, $instance, $langcode, &$items) {
  file_field_delete_revision($entity_type, $entity, $field, $instance, $langcode, $items);
}

function dlts_image_field_is_empty($item, $field) {
  return file_field_is_empty($item, $field);
}