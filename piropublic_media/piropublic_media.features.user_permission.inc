<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function piropublic_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: create media content
  $permissions['create media content'] = array(
    'name' => 'create media content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any media content
  $permissions['delete any media content'] = array(
    'name' => 'delete any media content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own media content
  $permissions['delete own media content'] = array(
    'name' => 'delete own media content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any media content
  $permissions['edit any media content'] = array(
    'name' => 'edit any media content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own media content
  $permissions['edit own media content'] = array(
    'name' => 'edit own media content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache media_page
  $permissions['view imagecache media_page'] = array(
    'name' => 'view imagecache media_page',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache media_small
  $permissions['view imagecache media_small'] = array(
    'name' => 'view imagecache media_small',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache media_thumb
  $permissions['view imagecache media_thumb'] = array(
    'name' => 'view imagecache media_thumb',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
