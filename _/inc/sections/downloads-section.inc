<?php  
$downloads_active = $section['downloads_active'];		
?>
<?php if ($downloads_active) { ?>

<?php 
$section_title = $section['section_title'];	
$download_section_files = $section['download_section_files'];
?>
<section id="<?php echo $section['acf_fc_layout']; ?>" class="pg-section with-icon-logo bg-col-<?php echo (!empty($color)) ? $color : 'red'; ?>">
	<div class="overlay"></div>
	<h2 class="text-center section-header bg-col-grayDk"><?php echo $section_title; ?></h2>
	
		<?php if ( !empty($download_section_files) ) { ?>
		<div class="download-items">
		<?php 
		$files_count = count($download_section_files);
		
			$offset_num = 4;
			if ($files_count == 2) {
			$offset_num = 2;	
			}	
		?>
		
		<?php foreach ($download_section_files as $k => $file) { 
		$img = wp_get_attachment_image_src($file['file_image'], 'medium' );	
		?>
		<div class="text-center download-item">
			<a href="<?php echo $file['file_download']; ?>" target="_blank">
				<span class="img"><img src="<?php echo $img[0]; ?>" height="70" /></span>
				<span class="title"><?php echo $file['file_title']; ?></span>
			</a>
		</div>
		<?php } ?>

		</div>
		
		<?php } else { ?>
			<div class="well well-lg text-center">
				<h3>Coming soon</h3>
				<p>Downloads are not available at the moment.</p>
			</div>
		<?php } ?>
		

</section>
<?php } ?>