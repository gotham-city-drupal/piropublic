<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Front page';
  $context->tag = 'piropublic frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'content_top',
          'weight' => 0,
        ),
        'simplenews-52' => array(
          'module' => 'simplenews',
          'delta' => 52,
          'region' => 'content_top',
          'weight' => 1,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'content_top',
          'weight' => 2,
        ),
        'views-frontpage_banner-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_banner-block_1',
          'region' => 'content_top',
          'weight' => 3,
        ),
        'views-frontpage_media-block_3' => array(
          'module' => 'views',
          'delta' => 'frontpage_media-block_3',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-frontpage_media-block_2' => array(
          'module' => 'views',
          'delta' => 'frontpage_media-block_2',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-frontpage_media-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_media-block_1',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page');
  t('piropublic frontpage');
  $export['frontpage'] = $context;

  return $export;
}
