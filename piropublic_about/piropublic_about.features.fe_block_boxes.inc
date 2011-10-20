<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_about_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'FAQ Block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'faq';
  $fe_block_boxes->body = '<div class="button-link-blue" style="margin-left:-15px;"><a href="/about/faq">Check Out Our FAQ</a></div><p>&nbsp;</p>';

  $export['faq'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'FAQ Question Block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'faq_question';
  $fe_block_boxes->body = '<div class="button-link-blue" style="margin-left:-15px;"><a href="/contact">Ask One</a></div><p>&nbsp;</p>';

  $export['faq_question'] = $fe_block_boxes;

  return $export;
}
