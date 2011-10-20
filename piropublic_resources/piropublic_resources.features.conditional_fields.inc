<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function piropublic_resources_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_resources_type',
  'field_name' => 'field_resources_link',
  'type' => 'resources',
  'trigger_values' => 
  array (
    'link' => 'link',
  ),
);
$items[] = array (
  'control_field_name' => 'field_resources_type',
  'field_name' => 'field_resources_file',
  'type' => 'resources',
  'trigger_values' => 
  array (
    'upload' => 'upload',
  ),
);
return $items;
}
