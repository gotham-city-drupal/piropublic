<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_media_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Divider';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'divider';
  $fe_block_boxes->body = '<div id="divider"></div>';

  $export['divider'] = $fe_block_boxes;

  return $export;
}
