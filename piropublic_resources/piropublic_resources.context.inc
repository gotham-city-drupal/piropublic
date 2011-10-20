<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_resources_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources';
  $context->description = 'Resource context';
  $context->tag = 'piropublic resources';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resources' => 'resources',
        'resources:page_1' => 'resources:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'right_top',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'resources',
    'menu' => 'resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resource context');
  t('piropublic resources');
  $export['resources'] = $context;

  return $export;
}
