<?php
/**
 * @file
 * sewer_overflow_activity.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sewer_overflow_activity_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sewer_overflow_activity';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_sewer_overflow_activity';
  $strongarm->value = '1';
  $export['i18n_node_extended_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_sewer_overflow_activity';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_sewer_overflow_activity';
  $strongarm->value = array();
  $export['i18n_sync_node_type_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_sewer_overflow_activity';
  $strongarm->value = '2';
  $export['language_content_type_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sewer_overflow_activity';
  $strongarm->value = array();
  $export['menu_options_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sewer_overflow_activity';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sewer_overflow_activity';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sewer_overflow_activity';
  $strongarm->value = '1';
  $export['node_preview_sewer_overflow_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sewer_overflow_activity';
  $strongarm->value = 1;
  $export['node_submitted_sewer_overflow_activity'] = $strongarm;

  return $export;
}
