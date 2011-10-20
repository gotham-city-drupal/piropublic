<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function piropublic_media_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_video
  $groups['media-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'media',
    'group_name' => 'group_video',
    'label' => 'Video Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_media_vidtype',
      '1' => 'field_media_youtube',
      '2' => 'field_media_embed',
      '3' => 'field_media_vidsource',
      '4' => 'field_media_vidthumb',
      '5' => 'field_media_viddesc',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Settings');

  return $groups;
}
