<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_about_default_fe_block_settings() {
  $export = array();

  // liberty
  $theme = array();

  $theme['block-faq'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-17',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Have a Question? ',
    'cache' => '-1',
    'machine_name' => 'faq',
  );

  $theme['block-faq_question'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '23',
    'region' => '',
    'custom' => '2',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Don\'t See Your Question? ',
    'cache' => '-1',
    'machine_name' => 'faq_question',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-faq-default'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-default',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views--exp-faq-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-faq-page_1',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '-19',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Filter by Question Type',
    'cache' => '1',
  );

  $export['liberty'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
