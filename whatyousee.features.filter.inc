<?php
/**
 * @file
 * whatyousee.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function whatyousee_filter_default_formats() {
  $formats = array();

  // Exported format: HTML
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <h3> <h4> <img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
