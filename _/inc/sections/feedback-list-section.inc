<?php 
$feedback_args = array(
	'posts_per_page'   => 5,
	'post_type' => 'tlw_testimonial_cpt',
	'orderby'          => 'rand',
); 

if (!empty($exclude_quotes)) {
$feedback_args['exclude'] = $exclude_quotes;
}
$feedback_quotes = get_posts($feedback_args); 
			
if ($feedback_quotes) { ?>

<!-- TEAM PROFILES SECTION -->
<section id="feedback-section" class="pg-section feedback-list">
<a name="feedback" id="feedback" class="section-target"></a>
	
		<?php foreach ($feedback_quotes as $k => $fb) { 
		
		$name = get_field('client_name', $fb->ID);	
		$location = get_field('location', $fb->ID);	
		$quote = get_field('quote', $fb->ID);
		$gender = get_field('gender', $fb->ID);
		?>
		
		<div class="item bg-col-<?php echo $colors[$k]; ?>">
		
			<div class="container-fluid feedback-quote">
				<blockquote class="no-border text-center"><?php echo $quote ; ?></blockquote>
				<span class="quote-name"><?php echo $name ; ?>, <?php echo $location ; ?></span>	
			</div>
			
			<div class="overlay"></div>
		
		</div>

		<?php } ?>		

</section>
<!-- TEAM PROFILES SECTION -->

<?php } ?>
