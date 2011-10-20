<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function piropublic_community_default_fe_block_settings() {
  $export = array();

  // liberty
  $theme = array();

  $theme['block-social_media'] = array(
    'module' => 'block',
    'theme' => 'liberty',
    'status' => 0,
    'weight' => '24',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Stay Connected',
    'cache' => '-1',
    'machine_name' => 'social_media',
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
