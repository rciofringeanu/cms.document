<?php
/**
 * @file
 * document.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function document_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'documents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => 2,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_document_number' => 'field_document_number',
    'title' => 'title',
    'field_document_publish_date' => 'field_document_publish_date',
    'field_document_instrument' => 'field_document_instrument',
    'field_document_type' => 'field_document_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_document_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_document_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_publish_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_instrument' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = 1;
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 1,
    'display_length' => '10',
    'processing' => 1,
    'server_side' => 1,
    'items_per_page_options' => '10, 25, 50, 100',
  );
  /* Relationship: Content: Type (field_document_type) */
  $handler->display->display_options['relationships']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['relationships']['field_document_type_tid']['required'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_instrument_target_id']['id'] = 'field_document_instrument_target_id';
  $handler->display->display_options['relationships']['field_document_instrument_target_id']['table'] = 'field_data_field_document_instrument';
  $handler->display->display_options['relationships']['field_document_instrument_target_id']['field'] = 'field_document_instrument_target_id';
  $handler->display->display_options['relationships']['field_document_instrument_target_id']['required'] = 0;
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_document_number']['id'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['table'] = 'field_data_field_document_number';
  $handler->display->display_options['fields']['field_document_number']['field'] = 'field_document_number';
  $handler->display->display_options['fields']['field_document_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_number']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_number']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Publish date */
  $handler->display->display_options['fields']['field_document_publish_date']['id'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['field'] = 'field_document_publish_date';
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_publish_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_publish_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_publish_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_publish_date']['settings'] = array(
    'format_type' => 'cms_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_document_publish_date']['field_api_classes'] = 0;
  /* Field: Content: CMS Instrument */
  $handler->display->display_options['fields']['field_document_instrument']['id'] = 'field_document_instrument';
  $handler->display->display_options['fields']['field_document_instrument']['table'] = 'field_data_field_document_instrument';
  $handler->display->display_options['fields']['field_document_instrument']['field'] = 'field_document_instrument';
  $handler->display->display_options['fields']['field_document_instrument']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_document_instrument']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_instrument']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_instrument']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_instrument']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_document_instrument']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_document_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_type']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_type']['field_api_classes'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_document_type_tid';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Type';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_document_instrument_target_id';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Publish date (field_document_publish_date) */
  $handler->display->display_options['sorts']['field_document_publish_date_value']['id'] = 'field_document_publish_date_value';
  $handler->display->display_options['sorts']['field_document_publish_date_value']['table'] = 'field_data_field_document_publish_date';
  $handler->display->display_options['sorts']['field_document_publish_date_value']['field'] = 'field_document_publish_date_value';
  $handler->display->display_options['sorts']['field_document_publish_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_document_publish_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_document_publish_date_value']['expose']['label'] = 'Publish date';
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
    'document' => 'document',
  );
  /* Filter criterion: Content: CMS Instrument (field_document_instrument) */
  $handler->display->display_options['filters']['field_document_instrument_target_id']['id'] = 'field_document_instrument_target_id';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['table'] = 'field_data_field_document_instrument';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['field'] = 'field_document_instrument_target_id';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_instrument_target_id']['expose']['operator_id'] = 'field_document_instrument_target_id_op';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['expose']['label'] = 'CMS Instrument';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['expose']['operator'] = 'field_document_instrument_target_id_op';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['expose']['identifier'] = 'field_document_instrument_target_id';
  $handler->display->display_options['filters']['field_document_instrument_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type (field_document_type) */
  $handler->display->display_options['filters']['field_document_type_tid']['id'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['field'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator_id'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['operator'] = 'field_document_type_tid_op';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['identifier'] = 'field_document_type_tid';
  $handler->display->display_options['filters']['field_document_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_document_type_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_document_type_tid']['vocabulary'] = 'document_type';
  $handler->display->display_options['filters']['field_document_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_document_type_tid']['error_message'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'document/listing';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'document_export');
  $translatables['documents'] = array(
    t('Master'),
    t('Documents'),
    t('more'),
    t('Search'),
    t('Clear filters'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term from field_document_type'),
    t('Content entity referenced from field_document_instrument'),
    t('Number'),
    t('Title'),
    t('Publish date'),
    t('CMS Instrument'),
    t('Type'),
    t('Page'),
    t('Data export'),
  );
  $export['documents'] = $view;

  return $export;
}
