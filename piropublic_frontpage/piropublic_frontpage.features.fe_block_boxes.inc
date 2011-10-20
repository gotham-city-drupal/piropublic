<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function piropublic_frontpage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Social Media Frontpage';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'fp_social_media';
  $fe_block_boxes->body = '<div class="block-content clear-block"><p><a href="http://www.facebook.com/pages/Liberty-Coalition/318132301249" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/facebook.png" class="sm-first" style="border-width: 0px; border-style: solid;" /></a><a href="https://twitter.com/#!/4yourfreedom" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/twitter.png" style="border-width: 0px; border-style: solid;" /></a><a href="http://www.youtube.com/user/libertycoalition" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/youtube.png" style="border-width: 0px; border-style: solid;" /></a><a href="rss" target="_blank"><img src="sites/all/modules/features/piropublic/piropublic_frontpage/theme/img/rss.png" style="border-width: 0px; border-style: solid;" /></a></p></div>';

  $export['fp_social_media'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Stay Connected';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'stay_connected';
  $fe_block_boxes->body = '<p><img alt="" src="sites/default/files/staycon_1.png" style="width: 300px; height: 71px;" /></p>';

  $export['stay_connected'] = $fe_block_boxes;

  return $export;
}
