<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_about_uuid_features_default_content() {
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
    'title' => 'Help',
    'body' => '',
    'teaser' => '',
    'log' => '',
    'format' => '1',
    'name' => '',
    'path' => 'help',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => '00fa401b-9658-11e0-88ba-e0e2cd5d67f0',
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
    'title' => 'About Liberty Coalition',
    'body' => '<p>The Liberty Coalition works to help organize, support, and coordinate transpartisan public policy activities related to civil liberties and basic human rights. We work in conjunction with groups of partner organizations that are interested in preserving the Bill of Rights, personal autonomy and individual privacy.</p><p>The Liberty Coalition is concerned about the threat to Americans&#39; fundamental and inalienable rights. The Coalition is dedicated to upholding and protecting our basic rights to life, liberty and the pursuit of happiness. In order to accomplish our task, we seek to protect those freedoms as articulated in the Bill of Rights. We base our concerns on the fundamental values and principles of the Declaration of Independence and the U.S. Constitution, particularly the separation of powers and federalism, and Bill of Rights.</p><p>To accomplish this mission, the Liberty Coalition seeks to restore, maintain, and improve individuals&#39; right through developing a networked forum for information and policy education and advocacy. The Coalition examines and expresses opinions on legislation and other government actions that would, on the one hand, limit the rights of citizens that would, on the other, advance efforts to enhance citizens&#39; rights.</p><p>Our primary focus is on restrictions on privacy, autonomy and liberty related issue such as the Patriot Act, National Identification Cards/National Drivers License and government databanks. We are also concerned with medical and financial privacy and confidentiality, and work more broadly as appropriate The Liberty Coalition seeks politically and judicially to retain our liberty while increasing our safety.</p>',
    'teaser' => '<p>The Liberty Coalition works to help organize, support, and coordinate transpartisan public policy activities related to civil liberties and basic human rights. We work in conjunction with groups of partner organizations that are interested in preserving the Bill of Rights, personal autonomy and individual privacy.</p>',
    'log' => '',
    'format' => '2',
    'name' => '',
    'path' => 'about',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => 'fa2e7bb7-9446-11e0-88ba-e0e2cd5d67f0',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
