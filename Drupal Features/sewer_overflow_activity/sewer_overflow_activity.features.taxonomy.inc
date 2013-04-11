<?php
/**
 * @file
 * sewer_overflow_activity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sewer_overflow_activity_taxonomy_default_vocabularies() {
  return array(
    'sewer_overflow_causes' => array(
      'name' => 'Sewer Overflow Causes',
      'machine_name' => 'sewer_overflow_causes',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'sewer_overflow_event_types' => array(
      'name' => 'Sewer Overflow Event Types',
      'machine_name' => 'sewer_overflow_event_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'sewer_overflow_statuses' => array(
      'name' => 'Sewer Overflow Statuses',
      'machine_name' => 'sewer_overflow_statuses',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
