<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function piropublic_media_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_media_vidtype',
  'field_name' => 'field_media_viddesc',
  'type' => 'media',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_vidtype',
  'field_name' => 'field_media_vidthumb',
  'type' => 'media',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'group_video',
  'type' => 'media',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_vidtype',
  'field_name' => 'field_media_vidsource',
  'type' => 'media',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'field_media_thumb',
  'type' => 'media',
  'trigger_values' => 
  array (
    'blog' => 'blog',
    'coalition_letter' => 'coalition_letter',
    'article' => 'article',
    'podcast' => 'podcast',
    'press' => 'press',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_vidtype',
  'field_name' => 'field_media_embed',
  'type' => 'media',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'field_media_vidtype',
  'type' => 'media',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'field_media_embed',
  'type' => 'media',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'field_media_youtube',
  'type' => 'media',
  'trigger_values' => 
  array (
    'video' => 'video',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_vidtype',
  'field_name' => 'field_media_youtube',
  'type' => 'media',
  'trigger_values' => 
  array (
    'youtube' => 'youtube',
  ),
);
$items[] = array (
  'control_field_name' => 'field_media_type',
  'field_name' => 'field_media_content',
  'type' => 'media',
  'trigger_values' => 
  array (
    'blog' => 'blog',
    'coalition_letter' => 'coalition_letter',
    'article' => 'article',
    'podcast' => 'podcast',
    'press' => 'press',
  ),
);
return $items;
}
