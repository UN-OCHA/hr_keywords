<?php
/**
 * @file
 * hr_keywords.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_keywords_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer keywords vocabulary terms.
  $permissions['administer keywords vocabulary terms'] = array(
    'name' => 'administer keywords vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
