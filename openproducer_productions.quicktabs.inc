<?php
/**
 * @file
 * openproducer_productions.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function openproducer_productions_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'productions';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Productions';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'productions',
      'display' => 'panel_pane_8',
      'args' => '',
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'productions',
      'display' => 'panel_pane_9',
      'args' => '',
      'title' => 'People',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'productions',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Video',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'productions',
      'display' => 'panel_pane_6',
      'args' => '',
      'title' => 'Photos',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'productions',
      'display' => 'panel_pane_7',
      'args' => '',
      'title' => 'Reviews',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Overview');
  t('People');
  t('Photos');
  t('Productions');
  t('Reviews');
  t('Video');

  $export['productions'] = $quicktabs;

  return $export;
}
