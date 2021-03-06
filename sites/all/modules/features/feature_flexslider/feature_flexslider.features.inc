<?php
/**
 * @file
 * feature_flexslider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_flexslider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_flexslider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
