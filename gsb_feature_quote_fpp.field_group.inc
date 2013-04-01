<?php
/**
 * @file
 * gsb_feature_quote_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_quote_fpp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gsb_quote_author|fieldable_panels_pane|gsb_quote_fpp|form';
  $field_group->group_name = 'group_gsb_quote_author';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'gsb_quote_fpp';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '4',
    'children' => array(
      0 => 'field_gsb_quote_company_link',
      1 => 'field_gsb_quote_company_name',
      2 => 'field_gsb_quote_name_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gsb_quote_author|fieldable_panels_pane|gsb_quote_fpp|form'] = $field_group;

  return $export;
}
