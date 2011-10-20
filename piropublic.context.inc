<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function piropublic_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_bottom';
  $context->description = 'Context for the footer bottom';
  $context->tag = 'piropublic core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-frontpage_tax-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_tax-block_1',
          'region' => 'footer_top_left',
          'weight' => 0,
        ),
        'views-frontpage_news-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_news-block_1',
          'region' => 'footer_top_mid',
          'weight' => 0,
        ),
        'views-partners-block_2' => array(
          'module' => 'views',
          'delta' => 'partners-block_2',
          'region' => 'footer_top_right',
          'weight' => 0,
        ),
        'menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-footer',
          'region' => 'footer_bottom',
          'weight' => 0,
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer_bottom',
          'weight' => 1,
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => 12,
          'region' => 'footer_bottom',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the footer bottom');
  t('piropublic core');
  $export['footer_bottom'] = $context;

  return $export;
}
