<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $admin_links: List of management tools for this node and queue.
 * - $media: Image or inline video.
 * - $source: Source of $media.
 * - $sharethis: if available, the sharethis buttons
 * - $button: The button content.
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

?>

<div class="promo_item">
  <div class="promo_left">
    <div class="media-wrapper <?php print $attr['classes']; ?>">
      <?php print $media; ?>
    </div>
    <div class="admin_links admin_top">
      <?php print $admin_links; ?>
    </div>
  </div>
  <div class="promo_right">
    <h1>
      <?php print $fields['title']->content; ?>
    </h1>
    <div class="teaser">
      <?php print $fields['field_frontpage_banner_desc_value']->content; ?>
    </div>
    <div class="button-link">
      <?php print $button; ?>
    </div>
    <div class="extra-links">
    </div>
    <div class="source">
      <?php print "Source: " . $source; ?>
    </div>
    <div class="sharethis">
      <?php print $sharethis; ?>
    </div>
  </div>
</div>
