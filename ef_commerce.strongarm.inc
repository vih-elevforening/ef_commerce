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
  $strongarm->name = 'commerce_checkout_completion_message';
  $strongarm->value = array(
    'value' => '<p>Tak for din ordre. Dit ordrenummer er [commerce-order:order-number]. Du kan <a href="[commerce-order:url]">se din ordre</a> på din profilside, når du er logget ind. Herfra kan du også udskrive den, <a href="/invoice-pdf/[commerce-order:order-id]">eller herfra</a>.</p>

<p>Husk også at <a href="https://www.facebook.com/elevforeningen?">følge elevforeningen på Facebook</a>.</p>
',
    'format' => 'full_html',
  );
  $export['commerce_checkout_completion_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_order_account_pane_auth_display';
  $strongarm->value = 1;
  $export['commerce_order_account_pane_auth_display'] = $strongarm;

  return $export;
}
