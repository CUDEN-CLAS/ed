<?php

/**
 * Implements hook_entity_property_info_alter().
 * 
 * By changing the property info of 'created' to date, Views will use the
 * handler to display, sort and filter by creation date.
 */
function ed4_entity_property_info_alter(&$info) {
  $properties = &$info['student']['properties'];
  $properties['created']['type'] = 'date';
}
