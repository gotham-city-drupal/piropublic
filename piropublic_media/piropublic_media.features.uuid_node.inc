<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_media_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '1',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Media',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '2',
    'name' => 'libertycoalition',
    'path' => 'media',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => 'e815f260-eefb-11e0-aafa-c42c032e6715',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
