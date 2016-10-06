<?php
$form = get_field('form');	
$section_title = get_field('form_section_title');	
$col_bg = get_field('form_section_bg_col_active');
if (empty($section_title)) {
$section_title = $form->title;
}
?>
<section id="form-section" class="pg-section with-header with-icon-logo">
	<h2 class="text-center section-header bg-col-grayDk"><?php echo $section_title; ?></h2>
	
	<div class="container-fluid">
		<?php gravity_form($form->id, false, true, false, null, true); ?>
	</div>
	
	<div class="overlay"></div>
</section>