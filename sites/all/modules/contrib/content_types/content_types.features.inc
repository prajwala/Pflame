<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'nonsense' => array(
      'name' => t('nonsense'),
      'base' => 'node_content',
      'description' => t('Funny things or different from routine life. Things we find strange in regular life. bla bla'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'note' => array(
      'name' => t('Note'),
      'base' => 'node_content',
      'description' => t('Short Notes which I wanted to remember. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
