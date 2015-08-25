<?php
/**
 * @file
 * openproducer_productions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_productions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openproducer_productions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openproducer_productions_image_default_styles() {
  $styles = array();

  // Exported image style: production_featured.
  $styles['production_featured'] = array(
    'label' => 'Production Featured (410x585)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 410,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 410,
          'height' => 585,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: production_large.
  $styles['production_large'] = array(
    'label' => 'Production Large (230x340)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 340,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: production_thumbnail.
  $styles['production_thumbnail'] = array(
    'label' => 'Production Thumbnail (220x220)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      7 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openproducer_productions_node_info() {
  $items = array(
    'production' => array(
      'name' => t('Production'),
      'base' => 'node_content',
      'description' => t('Choose this to enter or update info for a production.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
