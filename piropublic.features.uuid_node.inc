<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '0',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Content Standards',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '2',
    'name' => '',
    'path' => 'content-standards',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => '9b0988d8-87f4-11e0-b28c-9f89cf71cba4',
    'pathauto_perform_alias' => FALSE,
  );
  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '0',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Privacy Policy',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '1',
    'name' => '',
    'path' => 'privacy-policy',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => 'f4cd1ce6-87f7-11e0-b28c-9f89cf71cba4',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
