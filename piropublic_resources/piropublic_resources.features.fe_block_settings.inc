<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_resources_default_fe_block_settings() {
  $export = array();

  // liberty
  $theme = array();

  $theme['views-resources-block_1'] = array(
    'module' => 'views',
    'delta' => 'resources-block_1',
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
