<?php
/**
 * @file
 * openproducer_productions.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_productions_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'productions';
  $page->task = 'page';
  $page->admin_title = 'Productions';
  $page->admin_description = '';
  $page->path = 'productions';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Productions',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_productions__panel_context_21ccfcb8-6a57-4cba-9c1b-5e55c1b7719f';
  $handler->task = 'page';
  $handler->subtask = 'productions';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'events',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bowie';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
    'contentmain' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = 'Productions';
  $display->uuid = 'b17472e1-c860-4aec-a51c-31316709c674';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-00c70bd1-f997-454f-8801-f7cf5b384a31';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'productions-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00c70bd1-f997-454f-8801-f7cf5b384a31';
  $display->content['new-00c70bd1-f997-454f-8801-f7cf5b384a31'] = $pane;
  $display->panels['contentmain'][0] = 'new-00c70bd1-f997-454f-8801-f7cf5b384a31';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['productions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pushtape_front';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'This is the front page of the site used to kick things off on a good foot!';
  $page->path = 'front';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['pushtape_front'] = $page;

  return $pages;

}
