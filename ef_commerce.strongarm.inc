<?php
/**
 * @file
 * ef_commerce.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ef_commerce_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_auth_display';
  $strongarm->value = 1;
  $export['commerce_order_account_pane_auth_display'] = $strongarm;

  return $export;
}
