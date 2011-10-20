<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_community_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Stay Connected Social Media';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<p><a href="http://www.facebook.com/" target="_blank"><img src="/sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/facebook.png" style="border-width: 0px; border-style: solid;" /></a><a href="http://www.twitter.com/" target="_blank"><img src="/sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/twitter.png" style="border-width: 0px; border-style: solid;" /></a><a href="http://www.youtube.com/" target="_blank"><img src="/sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/youtube.png" style="border-width: 0px; border-style: solid;" /></a><a href="rss" target="_blank"><img src="/sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/rss.png" style="border-width: 0px; border-style: solid;" /></a></p>';

  $export['social_media'] = $fe_block_boxes;

  return $export;
}
