<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Disclaimer';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'disclaimer';
  $fe_block_boxes->body = '<p style="text-align: center;"><span style="font-size:10px;">Information and action items on the Liberty Coalition website should not be taken as an endorsement by any partner organization unless explicitly stated as such.</span></p>';

  $export['disclaimer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Copyright notice';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = '<p class="copyright" style="text-align: right;">&copy; Copyright 2011 - Liberty Coalition - 722 12th Street, NW Suite 400 - Washington DC 20005</p>';

  $export['footer_copyright'] = $fe_block_boxes;

  return $export;
}
