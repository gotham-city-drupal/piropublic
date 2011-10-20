<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: create resources content
  $permissions['create resources content'] = array(
    'name' => 'create resources content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any resources content
  $permissions['delete any resources content'] = array(
    'name' => 'delete any resources content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete own resources content
  $permissions['delete own resources content'] = array(
    'name' => 'delete own resources content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any resources content
  $permissions['edit any resources content'] = array(
    'name' => 'edit any resources content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit own resources content
  $permissions['edit own resources content'] = array(
    'name' => 'edit own resources content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: view imagecache resources_img
  $permissions['view imagecache resources_img'] = array(
    'name' => 'view imagecache resources_img',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
