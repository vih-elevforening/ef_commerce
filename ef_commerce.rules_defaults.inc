<?php

/**
 * Implements hook_default_rules_configuration().
 */
function ef_commerce_default_rules_configuration() {
  $rules = array();
  $rules['ef_commerce_update_the_order_status_when_paid_in_full'] = entity_import('rules_config', '{ "ef_commerce_update_the_order_status_when_paid_in_full" : {
    "LABEL" : "Update the order status when paid in full",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "10",
    "ACTIVE" : false,
    "OWNER" : "rules",
    "TAGS" : [ "Commerce Checkout" ],
    "REQUIRES" : [ "commerce_order", "commerce_payment" ],
    "ON" : { "commerce_payment_order_paid_in_full" : [] },
    "DO" : [
      { "commerce_order_update_state" : { "commerce_order" : [ "commerce-order" ], "order_state" : "completed" } }
    ]
  }
}');
  return $rules;
}
