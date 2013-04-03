<?php
/**
 * @file
 * gsb_feature_quote_fpp.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_quote_fpp_defaultconfig_features() {
  return array(
    'gsb_feature_quote_fpp' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_quote_fpp_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__quote';
  $strongarm->value = array(
    'view_modes' => array(
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__quote'] = $strongarm;

  return $export;
}
