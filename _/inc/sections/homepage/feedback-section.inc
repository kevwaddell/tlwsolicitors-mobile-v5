<?php
$feedback_active = $section['feedback_active'];
?>
<?php if ($feedback_active) { 
$testimonials = $section['testimonials'];	 
?>
<section id="<?php echo $section['acf_fc_layout']; ?>" class="pg-section">
<a name="feedback" id="feedback" class="section-target"></a>
	<div class="feedback-section-wrapper">
			
		<div class="feedback-section-inner">
		
		<?php foreach ($testimonials as $k => $quote) { 
		$quote_id = $quote['testimonial'];
		$quote_txt = get_field('quote', $quote_id);	
		$client_name = get_field('client_name', $quote_id);		
		$location = get_field('location', $quote_id);	
		$gender = get_field('gender', $quote_id);
		$col = $quote['color'];
		$company = get_field('company', $quote_id);
		if (!empty($company)) {
		$location = '<br />'.$company.', '.$location;	
		}
		?>
			<div class="item bg-col-<?php echo $col; ?><?php echo ($k == 0) ? " active":""; ?>">
				<div class="container-fluid feedback-quote">
					<blockquote class="no-border text-center"><?php echo $quote_txt; ?></blockquote>
					<span class="quote-name"><?php echo $client_name; ?>, <?php echo $location; ?></span>
				</div>
				
				<div class="overlay"></div>
				
			</div>
		<?php } ?>
	
		</div>
		
	</div>

</section>
<?php } ?>