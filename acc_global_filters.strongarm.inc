<?php
/**
 * @file
 * acc_global_filters.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acc_global_filters_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filters';
  $strongarm->value = array(
    1 => array(
      'name' => 'field_access_constraint',
      'block' => 'global_filter_1',
      'uses_view' => '0',
      'field' => 'field_access_constraint',
      'view' => '',
      'widget' => 'default_options_select',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    2 => array(
      'name' => 'field_locations',
      'block' => 'global_filter_2',
      'uses_view' => '0',
      'field' => 'field_locations',
      'view' => '',
      'widget' => 'default_options_select',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    3 => array(
      'name' => 'field_date',
      'block' => 'global_filter_3',
      'uses_view' => '0',
      'field' => 'field_date',
      'view' => '',
      'widget' => 'range',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    4 => array(
      'name' => 'field_clusters',
      'block' => 'global_filter_4',
      'uses_view' => '0',
      'field' => 'field_clusters',
      'view' => '',
      'widget' => 'select',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    5 => array(
      'name' => 'field_incident_type_restriction',
      'block' => 'global_filter_5',
      'uses_view' => '0',
      'field' => 'field_incident_type_restriction',
      'view' => '',
      'widget' => 'default_options_select',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    6 => array(
      'name' => 'field_incident_type_impediment',
      'block' => 'global_filter_6',
      'uses_view' => '0',
      'field' => 'field_incident_type_impediment',
      'view' => '',
      'widget' => 'default',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    7 => array(
      'name' => 'field_type_of_policy',
      'block' => 'global_filter_9',
      'uses_view' => '0',
      'field' => 'field_type_of_policy',
      'view' => '',
      'widget' => 'default',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    8 => array(
      'name' => 'field_incident_type_acc_incident',
      'block' => 'global_filter_8',
      'uses_view' => '0',
      'field' => 'field_incident_type_acc_incident',
      'view' => '',
      'widget' => 'default',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
    9 => array(
      'name' => 'field_responsible_actor',
      'block' => 'global_filter_7',
      'uses_view' => '0',
      'field' => 'field_responsible_actor',
      'view' => '',
      'widget' => 'default',
      'convert_to_range' => 0,
      'label' => '',
      'option_all_text' => '',
      'confirm_question' => '',
      'set_on_select' => 0,
      'global_field_or_view_default' => '',
      'global_php_default' => '',
    ),
  );
  $export['global_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filter_num_filters';
  $strongarm->value = '15';
  $export['global_filter_num_filters'] = $strongarm;

  return $export;
}
