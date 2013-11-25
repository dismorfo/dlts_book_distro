<?php
/**
 * @file
 * dlts_book_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlts_book_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_thumbnails';
  $view->description = '';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'book_thumbnails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'book_thumbnails';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Page Image Service Copy */
  $handler->display->display_options['fields']['field_service_copy']['id'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['table'] = 'field_data_field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['field'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['label'] = '';
  $handler->display->display_options['fields']['field_service_copy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_copy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_copy']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_copy']['settings'] = array(
    'image_style' => 'dlts-book-image',
    'image_link' => 'content',
  );
  /* Field: Content: Printed Page Number */
  $handler->display->display_options['fields']['field_real_page_number']['id'] = 'field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['table'] = 'field_data_field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['field'] = 'field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['label'] = '';
  $handler->display->display_options['fields']['field_real_page_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_real_page_number']['element_class'] = 'page-number';
  $handler->display->display_options['fields']['field_real_page_number']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_real_page_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_real_page_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_real_page_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_real_page_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_real_page_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Page Sequence Number */
  $handler->display->display_options['fields']['field_sequence_number']['id'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['field'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['label'] = '';
  $handler->display->display_options['fields']['field_sequence_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Page Sequence Number (field_sequence_number) */
  $handler->display->display_options['sorts']['field_sequence_number_value']['id'] = 'field_sequence_number_value';
  $handler->display->display_options['sorts']['field_sequence_number_value']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['sorts']['field_sequence_number_value']['field'] = 'field_sequence_number_value';
  /* Contextual filter: Content: Is Part Of ID (field_is_part_of) */
  $handler->display->display_options['arguments']['field_is_part_of_value']['id'] = 'field_is_part_of_value';
  $handler->display->display_options['arguments']['field_is_part_of_value']['table'] = 'field_data_field_is_part_of';
  $handler->display->display_options['arguments']['field_is_part_of_value']['field'] = 'field_is_part_of_value';
  $handler->display->display_options['arguments']['field_is_part_of_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_is_part_of_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_is_part_of_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_is_part_of_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_is_part_of_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_is_part_of_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dlts_book_page' => 'dlts_book_page',
  );
  /* Filter criterion: Content: Visible (field_visible) */
  $handler->display->display_options['filters']['field_visible_value']['id'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['table'] = 'field_data_field_visible';
  $handler->display->display_options['filters']['field_visible_value']['field'] = 'field_visible_value';
  $handler->display->display_options['filters']['field_visible_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'books/%/pages';
  $export['book_thumbnails'] = $view;

  $view = new view();
  $view->name = 'books';
  $view->description = 'Book listing with optional argument (IA identifier)';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'Books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Book (field_book) */
  $handler->display->display_options['relationships']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['relationships']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['relationships']['field_book_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_book_nid']['delta'] = '-1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Page Image Service Copy */
  $handler->display->display_options['fields']['field_service_copy']['id'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['table'] = 'field_data_field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['field'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['label'] = '';
  $handler->display->display_options['fields']['field_service_copy']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_service_copy']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_service_copy']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_service_copy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_copy']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_service_copy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_copy']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_copy']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Sort criterion: Content: Publication Date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['relationship'] = 'field_book_nid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dlts_book_page' => 'dlts_book_page',
  );
  /* Filter criterion: Content: Page Sequence Number (field_sequence_number) */
  $handler->display->display_options['filters']['field_sequence_number_value']['id'] = 'field_sequence_number_value';
  $handler->display->display_options['filters']['field_sequence_number_value']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['filters']['field_sequence_number_value']['field'] = 'field_sequence_number_value';
  $handler->display->display_options['filters']['field_sequence_number_value']['value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collection-items';
  $export['books'] = $view;

  return $export;
}
