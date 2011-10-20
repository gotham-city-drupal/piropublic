<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_partners_user_default_permissions() {
  $permissions = array();

  // Exported permission: create partner content
  $permissions['create partner content'] = array(
    'name' => 'create partner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: delete any partner content
  $permissions['delete any partner content'] = array(
    'name' => 'delete any partner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: delete own partner content
  $permissions['delete own partner content'] = array(
    'name' => 'delete own partner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: edit any partner content
  $permissions['edit any partner content'] = array(
    'name' => 'edit any partner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
    ),
  );

  // Exported permission: edit own partner content
  $permissions['edit own partner content'] = array(
    'name' => 'edit own partner content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: manage partners page
  $permissions['manage partners page'] = array(
    'name' => 'manage partners page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'headquarters',
      '2' => 'staff',
    ),
  );

  // Exported permission: view imagecache partner_img
  $permissions['view imagecache partner_img'] = array(
    'name' => 'view imagecache partner_img',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
