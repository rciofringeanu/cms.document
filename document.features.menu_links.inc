<?php
/**
 * @file
 * document.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function document_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_document-status-vocabulary:admin/structure/taxonomy/document_status
  $menu_links['main-menu_document-status-vocabulary:admin/structure/taxonomy/document_status'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_status',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document status vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-status-vocabulary:admin/structure/taxonomy/document_status',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_identifier' => 'main-menu_documents:<front>',
  );
  // Exported menu link: main-menu_document-submitter-vocabulary:admin/structure/taxonomy/document_submitter
  $menu_links['main-menu_document-submitter-vocabulary:admin/structure/taxonomy/document_submitter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_submitter',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document submitter vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-submitter-vocabulary:admin/structure/taxonomy/document_submitter',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_identifier' => 'main-menu_documents:<front>',
  );
  // Exported menu link: main-menu_document-type-vocabulary:admin/structure/taxonomy/document_type
  $menu_links['main-menu_document-type-vocabulary:admin/structure/taxonomy/document_type'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/document_type',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Document type vocabulary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_document-type-vocabulary:admin/structure/taxonomy/document_type',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_identifier' => 'main-menu_documents:<front>',
  );
  // Exported menu link: main-menu_documents:<front>
  $menu_links['main-menu_documents:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_documents:<front>',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: main-menu_view-documents:document/listing
  $menu_links['main-menu_view-documents:document/listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'document/listing',
    'router_path' => 'document/listing',
    'link_title' => 'View documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-documents:document/listing',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_identifier' => 'main-menu_documents:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Document status vocabulary');
  t('Document submitter vocabulary');
  t('Document type vocabulary');
  t('Documents');
  t('View documents');


  return $menu_links;
}
