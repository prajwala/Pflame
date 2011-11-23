(function ($) {

  Drupal.behaviors.addthis = {
    attach: function(context, settings) {
      $.getScript(
        Drupal.settings.addthis.widget_url,
        function(data, textStatus) {
          addthis.init();
        }
      );
    }
  };

}(jQuery));
