<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_about_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:about/board
  $menu_links['primary-links:about/board'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/board',
    'router_path' => 'about/board',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/4',
  );
  // Exported menu link: primary-links:about/faq
  $menu_links['primary-links:about/faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/faq',
    'router_path' => 'about/faq',
    'link_title' => 'FAQ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'node/4',
  );
  // Exported menu link: primary-links:about/staff
  $menu_links['primary-links:about/staff'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'about/staff',
    'router_path' => 'about/staff',
    'link_title' => 'Research Associates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node/4',
  );
  // Exported menu link: primary-links:node/4
  $menu_links['primary-links:node/4'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('FAQ');
  t('Leadership');
  t('Research Associates');


  return $menu_links;
}
