<?php
$all_forms_active = get_field('all_forms_active', 'option');
$form_active = $section['form_activated'];	
$form = $section['form'];	
$section_title = $section['section_title'];	
$col_bg = $section['section_bg_col_active'];

if (empty($section_title)) {
$section_title = $form->title;
}
?>
<?php if ($form_active && $all_forms_active) { ?>
<section id="<?php echo $section['acf_fc_layout']; ?>" class="pg-section with-header<?php echo (!empty($col_bg) && !empty($color)) ? ' bg-col-'.$color : ''; ?>">
		
	<?php if (!empty($col_bg) && !empty($color)) { ?>
	<div class="overlay"></div>			
	<?php } ?>
	
	<h2 class="text-center section-header bg-col-grayDk"><?php echo $section_title; ?></h2>
	
	<div class="container-fluid">
		<?php gravity_form($form->id, false, true, false, null, true); ?>
	</div>

</section>
<?php } ?>