<?php
/**
 * @file
 * acc_global_filters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_global_filters_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
