<?php
/**
 * @file
 * dlts_books.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dlts_book_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_book_pages_for_batch_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Book Pages for Batch Operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Book Pages for Batch Operations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::8' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::12' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::dlts_dmd_multiplier_populate_book_dmd_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::16' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::dlts_dmd_multiplier_rebuild_book_page_title_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::28' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Book */
  $handler->display->display_options['fields']['field_book']['id'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['table'] = 'field_data_field_book';
  $handler->display->display_options['fields']['field_book']['field'] = 'field_book';
  /* Field: Content: Page Sequence Number */
  $handler->display->display_options['fields']['field_sequence_number']['id'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['field'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Printed Page Number */
  $handler->display->display_options['fields']['field_real_page_number']['id'] = 'field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['table'] = 'field_data_field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['field'] = 'field_real_page_number';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dlts_book_page' => 'dlts_book_page',
  );
  /* Filter criterion: Content: Is Part Of ID (field_is_part_of) */
  $handler->display->display_options['filters']['field_is_part_of_value']['id'] = 'field_is_part_of_value';
  $handler->display->display_options['filters']['field_is_part_of_value']['table'] = 'field_data_field_is_part_of';
  $handler->display->display_options['filters']['field_is_part_of_value']['field'] = 'field_is_part_of_value';
  $handler->display->display_options['filters']['field_is_part_of_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_is_part_of_value']['value'] = 'masses057';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/all-book-pages-for-batch-operations';
  $export['all_book_pages_for_batch_operations'] = $view;

  $view = new view();
  $view->name = 'all_books_for_batch_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Books for Batch Operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Books for Batch Operations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::dlts_dmd_multiplier_populate_book_dmd_action:0d61a9995fdf27fb342e2d6decca3db9' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::dlts_dmd_multiplier_populate_book_dmd_action:eb129cca1c24169dd24f248930aeda7d' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::dlts_dmd_multiplier_populate_book_dmd_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_identifier']['id'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['table'] = 'field_data_field_identifier';
  $handler->display->display_options['fields']['field_identifier']['field'] = 'field_identifier';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dlts_book' => 'dlts_book',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/all-books-for-batch-operations';
  $export['all_books_for_batch_operations'] = $view;

  $view = new view();
  $view->name = 'all_books_for_content_curators';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Books for Content Curators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Books for Content Curators';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_identifier' => 'field_identifier',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'field_publication_date' => 'field_publication_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_identifier' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_publication_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_identifier']['id'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['table'] = 'field_data_field_identifier';
  $handler->display->display_options['fields']['field_identifier']['field'] = 'field_identifier';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Publication Date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dlts_book' => 'dlts_book',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/all-books';
  $export['all_books_for_content_curators'] = $view;

  $view = new view();
  $view->name = 'book';
  $view->description = 'All Pages for a book';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'Book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '8';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Page Sequence Number */
  $handler->display->display_options['fields']['field_sequence_number']['id'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['field'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['label'] = 'Page Number';
  $handler->display->display_options['fields']['field_sequence_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Page Type */
  $handler->display->display_options['fields']['field_page_type']['id'] = 'field_page_type';
  $handler->display->display_options['fields']['field_page_type']['table'] = 'field_data_field_page_type';
  $handler->display->display_options['fields']['field_page_type']['field'] = 'field_page_type';
  $handler->display->display_options['fields']['field_page_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_type']['hide_alter_empty'] = FALSE;
  /* Field: Content: Page Image */
  $handler->display->display_options['fields']['field_cropped_master']['id'] = 'field_cropped_master';
  $handler->display->display_options['fields']['field_cropped_master']['table'] = 'field_data_field_cropped_master';
  $handler->display->display_options['fields']['field_cropped_master']['field'] = 'field_cropped_master';
  $handler->display->display_options['fields']['field_cropped_master']['label'] = '';
  $handler->display->display_options['fields']['field_cropped_master']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cropped_master']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cropped_master']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cropped_master']['type'] = 'dlts_image_thumbnail';
  $handler->display->display_options['fields']['field_cropped_master']['settings'] = array(
    'image_style' => 'dlts-book-image',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Page Sequence Number (field_sequence_number) */
  $handler->display->display_options['sorts']['field_sequence_number_value']['id'] = 'field_sequence_number_value';
  $handler->display->display_options['sorts']['field_sequence_number_value']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['sorts']['field_sequence_number_value']['field'] = 'field_sequence_number_value';
  /* Contextual filter: Content: Book (field_book) */
  $handler->display->display_options['arguments']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['arguments']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['arguments']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['arguments']['field_book_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_book_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_book_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_book_nid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['path'] = 'book/%/pages/no';

  /* Display: Page - Not Normal */
  $handler = $view->new_display('page', 'Page - Not Normal', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Page Type (field_page_type) */
  $handler->display->display_options['filters']['field_page_type_value']['id'] = 'field_page_type_value';
  $handler->display->display_options['filters']['field_page_type_value']['table'] = 'field_data_field_page_type';
  $handler->display->display_options['filters']['field_page_type_value']['field'] = 'field_page_type_value';
  $handler->display->display_options['filters']['field_page_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_page_type_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'books/%/non-normal';
  $export['book'] = $view;

  $view = new view();
  $view->name = 'book_description';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'metadata';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Page Count */
  $handler->display->display_options['fields']['field_page_count']['id'] = 'field_page_count';
  $handler->display->display_options['fields']['field_page_count']['table'] = 'field_data_field_page_count';
  $handler->display->display_options['fields']['field_page_count']['field'] = 'field_page_count';
  $handler->display->display_options['fields']['field_page_count']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_page_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['book_description'] = $view;

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

  /* Display: Stitched Pages */
  $handler = $view->new_display('page', 'Stitched Pages', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Stitched Image */
  $handler->display->display_options['fields']['field_stitch_image']['id'] = 'field_stitch_image';
  $handler->display->display_options['fields']['field_stitch_image']['table'] = 'field_data_field_stitch_image';
  $handler->display->display_options['fields']['field_stitch_image']['field'] = 'field_stitch_image';
  $handler->display->display_options['fields']['field_stitch_image']['label'] = '';
  $handler->display->display_options['fields']['field_stitch_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stitch_image']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_stitch_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stitch_image']['settings'] = array(
    'image_style' => 'dlts-book-image',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'dlts_book_stitched_page' => 'dlts_book_stitched_page',
  );
  $handler->display->display_options['path'] = 'books/%/stitched';
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
    'image_style' => 'dlts-book-image',
    'image_link' => '',
  );
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_volume']['id'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['table'] = 'field_data_field_volume';
  $handler->display->display_options['fields']['field_volume']['field'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_volume']['label'] = 'Vol.';
  $handler->display->display_options['fields']['field_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volume']['element_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volume']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_default_classes'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_number']['label'] = 'No.';
  $handler->display->display_options['fields']['field_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_number']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_number']['element_default_classes'] = FALSE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['text'] = 'Vol. [field_volume], No. [field_number], [field_publication_date]';
  $handler->display->display_options['fields']['field_publication_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_class'] = 'vol-info';
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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

  $view = new view();
  $view->name = 'books_json';
  $view->description = 'Book listing with optional argument (IA identifier)';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'Books JSON';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Books';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'books';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'cbnFn';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
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
    'image_style' => 'dlts-book-image',
    'image_link' => '',
  );
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_volume']['id'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['table'] = 'field_data_field_volume';
  $handler->display->display_options['fields']['field_volume']['field'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_volume']['label'] = 'Vol.';
  $handler->display->display_options['fields']['field_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volume']['element_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volume']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_default_classes'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_number']['label'] = 'No.';
  $handler->display->display_options['fields']['field_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_number']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_number']['element_default_classes'] = FALSE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['text'] = 'Vol. [field_volume], No. [field_number], [field_publication_date]';
  $handler->display->display_options['fields']['field_publication_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_class'] = 'vol-info';
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Book Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Page Image Service Copy */
  $handler->display->display_options['fields']['field_service_copy']['id'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['table'] = 'field_data_field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['field'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['label'] = 'thumbnail';
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
    'image_style' => 'dlts-book-image',
    'image_link' => '',
  );
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_volume']['id'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['table'] = 'field_data_field_volume';
  $handler->display->display_options['fields']['field_volume']['field'] = 'field_volume';
  $handler->display->display_options['fields']['field_volume']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_volume']['label'] = 'Vol.';
  $handler->display->display_options['fields']['field_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_volume']['element_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_volume']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_volume']['element_default_classes'] = FALSE;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_number']['id'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['table'] = 'field_data_field_number';
  $handler->display->display_options['fields']['field_number']['field'] = 'field_number';
  $handler->display->display_options['fields']['field_number']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_number']['label'] = 'No.';
  $handler->display->display_options['fields']['field_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_number']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_number']['element_default_classes'] = FALSE;
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_publication_date']['label'] = 'label';
  $handler->display->display_options['fields']['field_publication_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['alter']['text'] = 'Vol. [field_volume], No. [field_number], [field_publication_date]';
  $handler->display->display_options['fields']['field_publication_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_publication_date']['element_wrapper_class'] = 'vol-info';
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  /* Field: Content: Identifier */
  $handler->display->display_options['fields']['field_identifier']['id'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['table'] = 'field_data_field_identifier';
  $handler->display->display_options['fields']['field_identifier']['field'] = 'field_identifier';
  $handler->display->display_options['fields']['field_identifier']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_identifier']['label'] = 'identifier';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_publisher']['id'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['table'] = 'field_data_field_publisher';
  $handler->display->display_options['fields']['field_publisher']['field'] = 'field_publisher';
  $handler->display->display_options['fields']['field_publisher']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_publisher']['label'] = 'publisher';
  $handler->display->display_options['fields']['field_publisher']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_publisher']['alter']['text'] = 'Publisher: [field_publisher]';
  $handler->display->display_options['fields']['field_publisher']['delta_offset'] = '0';
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_subject']['label'] = 'subject';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = 'Subject: [field_subject] ';
  $handler->display->display_options['fields']['field_subject']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_subject']['delta_offset'] = '0';
  /* Field: Content: Sequence Count */
  $handler->display->display_options['fields']['field_sequence_count']['id'] = 'field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['table'] = 'field_data_field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['field'] = 'field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_sequence_count']['label'] = 'sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_count']['alter']['text'] = 'Sequence count: [field_sequence_count]';
  $handler->display->display_options['fields']['field_sequence_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Page Count */
  $handler->display->display_options['fields']['field_page_count']['id'] = 'field_page_count';
  $handler->display->display_options['fields']['field_page_count']['table'] = 'field_data_field_page_count';
  $handler->display->display_options['fields']['field_page_count']['field'] = 'field_page_count';
  $handler->display->display_options['fields']['field_page_count']['relationship'] = 'field_book_nid';
  $handler->display->display_options['fields']['field_page_count']['label'] = 'page_count';
  $handler->display->display_options['fields']['field_page_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_page_count']['alter']['text'] = 'Page Count: [field_page_count]';
  $handler->display->display_options['fields']['field_page_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'collection-items.json';
  $export['books_json'] = $view;

  $view = new view();
  $view->name = 'books_table';
  $view->description = 'Book listing with optional argument (IA identifier)';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'books_table';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Sequence Count */
  $handler->display->display_options['fields']['field_sequence_count']['id'] = 'field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['table'] = 'field_data_field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['field'] = 'field_sequence_count';
  $handler->display->display_options['fields']['field_sequence_count']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sequence_count']['alter']['path'] = 'book/%1/pages';
  $handler->display->display_options['fields']['field_sequence_count']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_count']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'View Pages';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'admin/book/[nid]/pages/no-thumbnail';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Metadata';
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = FALSE;
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
    'dlts_book' => 'dlts_book',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/books/table';
  $export['books_table'] = $view;

  $view = new view();
  $view->name = 'datasource_thumbnails';
  $view->description = '';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'datasource_thumbnails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'book_thumbnails';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'pages';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['content_type'] = 'text/json';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Page Image Service Copy */
  $handler->display->display_options['fields']['field_service_copy']['id'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['table'] = 'field_data_field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['field'] = 'field_service_copy';
  $handler->display->display_options['fields']['field_service_copy']['label'] = 'service';
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
  /* Field: Content: Page Sequence Number */
  $handler->display->display_options['fields']['field_sequence_number']['id'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['field'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Printed Page Number */
  $handler->display->display_options['fields']['field_real_page_number']['id'] = 'field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['table'] = 'field_data_field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['field'] = 'field_real_page_number';
  $handler->display->display_options['fields']['field_real_page_number']['label'] = 'page';
  $handler->display->display_options['fields']['field_real_page_number']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'books/%/book-pages.json';
  $export['datasource_thumbnails'] = $view;

  $view = new view();
  $view->name = 'pages_no_thumbnail';
  $view->description = 'All Pages for a book';
  $view->tag = 'dlts_books';
  $view->base_table = 'node';
  $view->human_name = 'pages_no_thumbnail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pages_no_thumbnail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Book */
  $handler->display->display_options['fields']['field_book']['id'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['table'] = 'field_data_field_book';
  $handler->display->display_options['fields']['field_book']['field'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Page ID';
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Page Sequence Number */
  $handler->display->display_options['fields']['field_sequence_number']['id'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['field'] = 'field_sequence_number';
  $handler->display->display_options['fields']['field_sequence_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_sequence_number']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Page Type */
  $handler->display->display_options['fields']['field_page_type']['id'] = 'field_page_type';
  $handler->display->display_options['fields']['field_page_type']['table'] = 'field_data_field_page_type';
  $handler->display->display_options['fields']['field_page_type']['field'] = 'field_page_type';
  $handler->display->display_options['fields']['field_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_type']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Page Sequence Number (field_sequence_number) */
  $handler->display->display_options['sorts']['field_sequence_number_value']['id'] = 'field_sequence_number_value';
  $handler->display->display_options['sorts']['field_sequence_number_value']['table'] = 'field_data_field_sequence_number';
  $handler->display->display_options['sorts']['field_sequence_number_value']['field'] = 'field_sequence_number_value';
  /* Contextual filter: Content: Book (field_book) */
  $handler->display->display_options['arguments']['field_book_nid']['id'] = 'field_book_nid';
  $handler->display->display_options['arguments']['field_book_nid']['table'] = 'field_data_field_book';
  $handler->display->display_options['arguments']['field_book_nid']['field'] = 'field_book_nid';
  $handler->display->display_options['arguments']['field_book_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_book_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_book_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_book_nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/book/%/pages/no-thumbnail';
  $export['pages_no_thumbnail'] = $view;

  return $export;
}
