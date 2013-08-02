<?php
/**
 * @file
 * soc_odder_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function soc_odder_calendar_taxonomy_default_vocabularies() {
  return array(
    'soc_odder_event_kategori' => array(
      'name' => 'Event-kategori',
      'machine_name' => 'soc_odder_event_kategori',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
