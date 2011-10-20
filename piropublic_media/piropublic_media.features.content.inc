<?php

/**
 * Implementation of hook_content_default_fields().
 */
function piropublic_media_content_default_fields() {
  $fields = array();

  // Exported field: field_media_content
  $fields['media-field_media_content'] = array(
    'field_name' => 'field_media_content',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_media_content][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Content',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_media_embed
  $fields['media-field_media_embed'] = array(
    'field_name' => 'field_media_embed',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_media_embed][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Embed Code',
      'weight' => '1',
      'description' => 'Paste the video embed code here. You need to make sure the width height parameter of the embedded video is 640x390 for large videos and 420x235 for smaller videos.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_media_thumb
  $fields['media-field_media_thumb'] = array(
    'field_name' => 'field_media_thumb',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'media_small_linked',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'media_thumb_linked',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'media_thumb_linked',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '305x140',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 0,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '4M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'libertysquare.png',
        'filepath' => 'sites/default/files/imagefield_default_images/libertysquare_1.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/libertysquare_1.png',
        'filesize' => 18798,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1317746538,
        'fid' => '94',
      ),
      'use_default_image' => 1,
      'label' => 'Content Thumbnail',
      'weight' => '-2',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_media_type
  $fields['media-field_media_type'] = array(
    'field_name' => 'field_media_type',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'blog|Blog Post
coalition_letter|Coalition Letter
article|Op-Ed
podcast|Podcast
press|Press Release
video|Video',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'blog',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Media Type',
      'weight' => '-4',
      'description' => 'Choose the type of media.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_media_viddesc
  $fields['media-field_media_viddesc'] = array(
    'field_name' => 'field_media_viddesc',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_media_viddesc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Description',
      'weight' => '4',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_media_vidsource
  $fields['media-field_media_vidsource'] = array(
    'field_name' => 'field_media_vidsource',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_media_vidsource][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Source',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_media_vidthumb
  $fields['media-field_media_vidthumb'] = array(
    'field_name' => 'field_media_vidthumb',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'media_thumb_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'media_thumb_linked',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '305x140',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'libertysquare.png',
        'filepath' => 'sites/default/files/imagefield_default_images/libertysquare_2.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/libertysquare_2.png',
        'filesize' => 18798,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1317746557,
        'fid' => '95',
      ),
      'use_default_image' => 1,
      'label' => 'Video Thumbnail',
      'weight' => '3',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_media_vidtype
  $fields['media-field_media_vidtype'] = array(
    'field_name' => 'field_media_vidtype',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'youtube|YouTube
other|Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'youtube',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Type',
      'weight' => '-1',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_media_youtube
  $fields['media-field_media_youtube'] = array(
    'field_name' => 'field_media_youtube',
    'type_name' => 'media',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'video_preview',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'video_preview',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '640',
      'video_height' => '390',
      'video_autoplay' => 0,
      'preview_width' => '420',
      'preview_height' => '235',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '120',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'YouTube Link',
      'weight' => 0,
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Content Thumbnail');
  t('Embed Code');
  t('Media Type');
  t('Video Description');
  t('Video Source');
  t('Video Thumbnail');
  t('Video Type');
  t('YouTube Link');

  return $fields;
}
