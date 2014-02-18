<?php
/**
 * @file
 * zm_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function zm_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: Wysiwyg HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Wysiwyg HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'wysiwyg' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'valid_elements' => '@[class|style|title],
a[!href|target<_blank|name|rel|id], 
-div[align<center?justify?left?right], 
#p[align<center?justify?left?right],
strong/b,em/i,u,-sup,-sub,small,
-ol[type|compact],-ul[type|compact],-li,-dl,-dt,-dd,
caption,-pre,-code,address,-h1,-h2,-h3,-h4,-h5,-h6,hr[size|noshade],
br,cite,pre[class],code[type],-blockquote,cite,abbr,acronym,legend,
img[src|width|height|align|hspace|vspace], 
-table[border=0|cellspacing|cellpadding|width|frame|rules|height|align|summary|bgcolor|background|bordercolor],
-tr[rowspan|width|height|align|valign|bgcolor|background|bordercolor],
tbody,thead,tfoot,#td[colspan|rowspan|width|height|align|valign|bgcolor|background|bordercolor|scope],
#th[colspan|rowspan|width|height|align|valign|scope],
-span[align<center?justify?left?right]',
          'allow_comments' => 0,
          'nofollow_policy' => 'whitelist',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 'color',
            'background' => 'background',
            'background-color' => 'background-color',
            'background-image' => 'background-image',
            'background-repeat' => 'background-repeat',
            'background-attachment' => 'background-attachment',
            'background-position' => 'background-position',
          ),
          'style_font' => array(
            'font' => 'font',
            'font-family' => 'font-family',
            'font-size' => 'font-size',
            'font-size-adjust' => 'font-size-adjust',
            'font-stretch' => 'font-stretch',
            'font-style' => 'font-style',
            'font-variant' => 'font-variant',
            'font-weight' => 'font-weight',
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'text-transform' => 'text-transform',
            'letter-spacing' => 'letter-spacing',
            'word-spacing' => 'word-spacing',
            'white-space' => 'white-space',
            'direction' => 'direction',
            'unicode-bidi' => 'unicode-bidi',
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 'border-top',
            'border-right' => 'border-right',
            'border-bottom' => 'border-bottom',
            'border-left' => 'border-left',
            'border-width' => 'border-width',
            'border-top-width' => 'border-top-width',
            'border-right-width' => 'border-right-width',
            'border-bottom-width' => 'border-bottom-width',
            'border-left-width' => 'border-left-width',
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 'border-top-color',
            'border-right-color' => 'border-right-color',
            'border-bottom-color' => 'border-bottom-color',
            'border-left-color' => 'border-left-color',
            'border-style' => 'border-style',
            'border-top-style' => 'border-top-style',
            'border-right-style' => 'border-right-style',
            'border-bottom-style' => 'border-bottom-style',
            'border-left-style' => 'border-left-style',
          ),
          'style_dimension' => array(
            'height' => 'height',
            'line-height' => 'line-height',
            'max-height' => 'max-height',
            'max-width' => 'max-width',
            'min-height' => 'min-height',
            'min-width' => 'min-width',
            'width' => 'width',
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'clip' => 'clip',
            'left' => 'left',
            'overflow' => 'overflow',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'z-index' => 'z-index',
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'display' => 'display',
            'float' => 'float',
            'position' => 'position',
            'visibility' => 'visibility',
          ),
          'style_list' => array(
            'list-style' => 'list-style',
            'list-style-image' => 'list-style-image',
            'list-style-position' => 'list-style-position',
            'list-style-type' => 'list-style-type',
          ),
          'style_table' => array(
            'border-collapse' => 'border-collapse',
            'border-spacing' => 'border-spacing',
            'caption-side' => 'caption-side',
            'empty-cells' => 'empty-cells',
            'table-layout' => 'table-layout',
          ),
          'style_user' => array(
            'cursor' => 'cursor',
            'outline' => 'outline',
            'outline-width' => 'outline-width',
            'outline-style' => 'outline-style',
            'outline-color' => 'outline-color',
            'zoom' => 'zoom',
          ),
          'rule_valid_classes' => array(
            0 => 'a*',
            2 => 'b*',
            4 => 'brush*',
            6 => 'c*',
            8 => 'd*',
            10 => 'e*',
            12 => 'f*',
            14 => 'g*',
            16 => 'h*',
            18 => 'i*',
            20 => 'j*',
            22 => 'k*',
            24 => 'l*',
            26 => 'm*',
            28 => 'n*',
            30 => 'o*',
            32 => 'p*',
            34 => 'q*',
            36 => 'r*',
            38 => 's*',
            40 => 't*',
            42 => 'u*',
            44 => 'v*',
            46 => 'w*',
            48 => 'x*',
            50 => 'y*',
            52 => 'z*',
          ),
          'rule_valid_ids' => array(
            0 => 'a*',
            2 => 'b*',
            4 => 'c*',
            6 => 'd*',
            8 => 'e*',
            10 => 'f*',
            12 => 'g*',
            14 => 'h*',
            16 => 'i*',
            18 => 'j*',
            20 => 'k*',
            22 => 'l*',
            24 => 'm*',
            26 => 'n*',
            28 => 'o*',
            30 => 'p*',
            32 => 'q*',
            34 => 'r*',
            36 => 's*',
            38 => 't*',
            40 => 'u*',
            42 => 'v*',
            44 => 'w*',
            46 => 'x*',
            48 => 'y*',
            50 => 'z*',
          ),
          'rule_style_urls' => array(
            0 => '/*',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: HTML Code.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'HTML Code',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
