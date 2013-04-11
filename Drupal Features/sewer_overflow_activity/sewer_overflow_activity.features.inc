<?php
/**
 * @file
 * sewer_overflow_activity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sewer_overflow_activity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sewer_overflow_activity_node_info() {
  $items = array(
    'sewer_overflow_activity' => array(
      'name' => t('Sewer Overflow Activity'),
      'base' => 'node_content',
      'description' => t('Sewer Overflow Activity'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
