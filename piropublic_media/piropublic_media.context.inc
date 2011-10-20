<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_media_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media';
  $context->description = 'Media context';
  $context->tag = 'piropublic media';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media-block_1' => array(
          'module' => 'views',
          'delta' => 'media-block_1',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-media-block_2' => array(
          'module' => 'views',
          'delta' => 'media-block_2',
          'region' => 'content_top',
          'weight' => 1,
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => 11,
          'region' => 'content_top',
          'weight' => 2,
        ),
        'views-media-block_3' => array(
          'module' => 'views',
          'delta' => 'media-block_3',
          'region' => 'content_top',
          'weight' => 3,
        ),
        'views-media-block_4' => array(
          'module' => 'views',
          'delta' => 'media-block_4',
          'region' => 'content_top',
          'weight' => 4,
        ),
        'views-media-block_5' => array(
          'module' => 'views',
          'delta' => 'media-block_5',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-media-block_6' => array(
          'module' => 'views',
          'delta' => 'media-block_6',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-media-block_7' => array(
          'module' => 'views',
          'delta' => 'media-block_7',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => 2,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-media-block_8' => array(
          'module' => 'views',
          'delta' => 'media-block_8',
          'region' => 'right',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/125',
    'menu' => 'node/125',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media context');
  t('piropublic media');
  $export['media'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_level2';
  $context->description = 'Media subpages';
  $context->tag = 'piropublic media';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'media:page_1' => 'media:page_1',
        'media:page_2' => 'media:page_2',
        'media:page_3' => 'media:page_3',
        'media:page_4' => 'media:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => 2,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-media-block_8' => array(
          'module' => 'views',
          'delta' => 'media-block_8',
          'region' => 'right',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/125',
    'menu' => 'node/125',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Media subpages');
  t('piropublic media');
  $export['media_level2'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_level';
  $context->description = 'Node Level';
  $context->tag = 'piropublic media';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media' => 'media',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => 2,
          'region' => 'right_top',
          'weight' => 0,
        ),
        'views-media-block_10' => array(
          'module' => 'views',
          'delta' => 'media-block_10',
          'region' => 'right',
          'weight' => 0,
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'breadcrumb' => 'node/125',
    'menu' => 'node/125',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node Level');
  t('piropublic media');
  $export['node_level'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video_nodes';
  $context->description = 'Context for video page';
  $context->tag = 'piropublic media';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'media:page_2' => 'media:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-media-block_9' => array(
          'module' => 'views',
          'delta' => 'media-block_9',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for video page');
  t('piropublic media');
  $export['video_nodes'] = $context;

  return $export;
}
