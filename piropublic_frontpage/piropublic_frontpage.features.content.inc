<?php

/**
 * Implementation of hook_content_default_fields().
 */
function piropublic_frontpage_content_default_fields() {
  $fields = array();

  // Exported field: field_frontpage_banner_btntxt
  $fields['frontpage_banner-field_frontpage_banner_btntxt'] = array(
    'field_name' => 'field_frontpage_banner_btntxt',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_frontpage_banner_lnkgrp',
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
    'max_length' => '17',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_frontpage_banner_btntxt][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Button Text',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_frontpage_banner_desc
  $fields['frontpage_banner-field_frontpage_banner_desc'] = array(
    'field_name' => 'field_frontpage_banner_desc',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => 0,
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
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_frontpage_banner_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Brief Description',
      'weight' => 0,
      'description' => 'Enter a brief description about this link or video. Remember to keep your entry under 400 characters or 75 words otherwise it will be cut off.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_frontpage_banner_embed
  $fields['frontpage_banner-field_frontpage_banner_embed'] = array(
    'field_name' => 'field_frontpage_banner_embed',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_frontpage_banner_vidgrp',
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
          '_error_element' => 'default_value_widget][field_frontpage_banner_embed][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Embed Code',
      'weight' => '4',
      'description' => 'Paste the video embed code here. You need to make sure the width height parameter of the embedded video is 640x390 for large videos and 420x235 for smaller videos.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_frontpage_banner_img
  $fields['frontpage_banner-field_frontpage_banner_img'] = array(
    'field_name' => 'field_frontpage_banner_img',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_frontpage_banner_lnkgrp',
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
      'resolution' => '640x390',
      'enforce_ratio' => 1,
      'croparea' => '700x700',
      'enforce_minimum' => 0,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '2M',
      'max_resolution' => '0',
      'min_resolution' => '500x300',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'banner-main-bg.jpg',
        'filepath' => 'sites/default/files/imagefield_default_images/banner-main-bg.jpg',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/banner-main-bg.jpg',
        'filesize' => 134836,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1307470780,
        'fid' => '80',
      ),
      'use_default_image' => 0,
      'label' => 'Banner Image',
      'weight' => '3',
      'description' => '',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_frontpage_banner_imgsrc
  $fields['frontpage_banner-field_frontpage_banner_imgsrc'] = array(
    'field_name' => 'field_frontpage_banner_imgsrc',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_frontpage_banner_lnkgrp',
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
          '_error_element' => 'default_value_widget][field_frontpage_banner_imgsrc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Photo Source',
      'weight' => '4',
      'description' => 'Enter the source of the image. Examples: CBS, AP, ImageShack, Charles Darwin',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_frontpage_banner_link
  $fields['frontpage_banner-field_frontpage_banner_link'] = array(
    'field_name' => 'field_frontpage_banner_link',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_frontpage_banner_lnkgrp',
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'user',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
          'attributes' => array(
            'target' => '_blank',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link to',
      'weight' => '2',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_frontpage_banner_type
  $fields['frontpage_banner-field_frontpage_banner_type'] = array(
    'field_name' => 'field_frontpage_banner_type',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '-3',
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
    'allowed_values' => 'link|Link
video|Video',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Posting',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_frontpage_banner_videotype
  $fields['frontpage_banner-field_frontpage_banner_videotype'] = array(
    'field_name' => 'field_frontpage_banner_videotype',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_frontpage_banner_vidgrp',
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
other|Other (Embed Code)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'youtube',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'What kind of video',
      'weight' => '1',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_frontpage_banner_vidsrc
  $fields['frontpage_banner-field_frontpage_banner_vidsrc'] = array(
    'field_name' => 'field_frontpage_banner_vidsrc',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_frontpage_banner_vidgrp',
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
          '_error_element' => 'default_value_widget][field_frontpage_banner_vidsrc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video Source',
      'weight' => '5',
      'description' => 'Enter the source of the embedded video. Examples: vimeo, cspan.org, bob\'s blog',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_frontpage_banner_youtube
  $fields['frontpage_banner-field_frontpage_banner_youtube'] = array(
    'field_name' => 'field_frontpage_banner_youtube',
    'type_name' => 'frontpage_banner',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_frontpage_banner_vidgrp',
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
      'video_autoplay' => 1,
      'preview_width' => '420',
      'preview_height' => '235',
      'preview_autoplay' => 1,
      'thumbnail_width' => '640',
      'thumbnail_height' => '390',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'youtube' => 'youtube',
      ),
      'emthumb' => 0,
      'emthumb_label' => 'YouTube custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the YouTube thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => '',
      'emthumb_custom_alt' => 0,
      'emthumb_custom_title' => 0,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 1,
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'YouTube',
      'weight' => '2',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Image');
  t('Brief Description');
  t('Button Text');
  t('Embed Code');
  t('Link to');
  t('Photo Source');
  t('Posting');
  t('Video Source');
  t('What kind of video');
  t('YouTube');

  return $fields;
}
