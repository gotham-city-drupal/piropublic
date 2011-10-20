<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function piropublic_media_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:media/article
  $menu_links['primary-links:media/article'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/article',
    'router_path' => 'media/%',
    'link_title' => 'Articles',
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
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:media/blog
  $menu_links['primary-links:media/blog'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/blog',
    'router_path' => 'media/%',
    'link_title' => 'Blog Posts',
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
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:media/coalition_letter
  $menu_links['primary-links:media/coalition_letter'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/coalition_letter',
    'router_path' => 'media/%',
    'link_title' => 'Coalition Letter',
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
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:media/podcast
  $menu_links['primary-links:media/podcast'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/podcast',
    'router_path' => 'media/%',
    'link_title' => 'Podcasts',
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
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:media/press
  $menu_links['primary-links:media/press'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/press',
    'router_path' => 'media/%',
    'link_title' => 'Press Releases',
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
    'weight' => '-46',
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:media/video
  $menu_links['primary-links:media/video'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'media/video',
    'router_path' => 'media/%',
    'link_title' => 'Video',
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
    'weight' => '0',
    'parent_path' => 'node/125',
  );
  // Exported menu link: primary-links:node/125
  $menu_links['primary-links:node/125'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/125',
    'router_path' => 'node/%',
    'link_title' => 'Media',
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
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Blog Posts');
  t('Coalition Letter');
  t('Media');
  t('Podcasts');
  t('Press Releases');
  t('Video');


  return $menu_links;
}
