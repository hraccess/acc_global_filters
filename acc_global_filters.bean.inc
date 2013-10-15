<?php
/**
 * @file
 * acc_global_filters.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function acc_global_filters_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'global_filter_reset';
  $bean_type->label = 'Global filter reset';
  $bean_type->options = '';
  $bean_type->description = 'Reset filters set by the Views Global Filter module';
  $export['global_filter_reset'] = $bean_type;

  return $export;
}
