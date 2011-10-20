if (Drupal.jsEnabled) {
	$(document).ready(function () {
		// FAQ Page
		$('.view-faq .views-field-body').hide();
		$('.view-faq .views-field-title').toggle(
			function(){
				$(this).next().next().fadeIn();
			},
			function(){
				$(this).next().next().fadeOut();			
		});
		
		$('#views-exposed-form-faq-page-1 select').change(function(){
			$('#views-exposed-form-faq-page-1').submit();
		});
	});
}