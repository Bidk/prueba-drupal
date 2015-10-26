<?php
/**
 * @file
 * feature_flexslider.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_flexslider_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'poblacion_buscador';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'buscar_peronas' => 'buscar_peronas',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-UE3P31w10yLvoJV11L0q9g1t1hmoZxX6' => array(
          'module' => 'facetapi',
          'delta' => 'UE3P31w10yLvoJV11L0q9g1t1hmoZxX6',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-xVJrlKnAaEI9nmHm29nkgdWlADHXiKBJ' => array(
          'module' => 'facetapi',
          'delta' => 'xVJrlKnAaEI9nmHm29nkgdWlADHXiKBJ',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-6PjCEjH9JmOALQSaz7Y5CNnVxwiAzB5F' => array(
          'module' => 'facetapi',
          'delta' => '6PjCEjH9JmOALQSaz7Y5CNnVxwiAzB5F',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['poblacion_buscador'] = $context;

  return $export;
}
