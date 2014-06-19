<?php
/**
 * @file
 * ef_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
