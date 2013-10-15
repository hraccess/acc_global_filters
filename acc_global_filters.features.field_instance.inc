<?php
/**
 * @file
 * acc_global_filters.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acc_global_filters_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-global_filter_reset-field_global_filter_url'
  $field_instances['bean-global_filter_reset-field_global_filter_url'] = array(
    'bundle' => 'global_filter_reset',
    'default_value' => array(
      0 => array(
        'title' => 'reset cluster filter',
        'url' => '[site:url]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_global_filter_url',
    'label' => 'Reset',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Reset');

  return $field_instances;
}
