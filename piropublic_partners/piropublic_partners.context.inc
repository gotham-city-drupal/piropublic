<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_partners_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partners';
  $context->description = 'Partner context';
  $context->tag = 'piropublic partners';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'partners' => 'partners',
        'partners:page_1' => 'partners:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-partners-block_1' => array(
          'module' => 'views',
          'delta' => 'partners-block_1',
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
    'breadcrumb' => 'partners',
    'menu' => 'partners',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Partner context');
  t('piropublic partners');
  $export['partners'] = $context;

  return $export;
}
