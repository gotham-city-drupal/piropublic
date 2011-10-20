<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_partners_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:partners
  $menu_links['primary-links:partners'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'partners',
    'router_path' => 'partners',
    'link_title' => 'Partners',
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
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Partners');


  return $menu_links;
}
