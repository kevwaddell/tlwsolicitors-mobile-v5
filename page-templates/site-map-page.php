<?php 
/*
Template Name: Sitemap page
*/
 ?>

<?php get_header(); ?>

<?php if ( have_posts() ): while ( have_posts() ) : the_post(); ?>	

<!-- MAIN CONTENT START -->
<main>
	
	<?php include (STYLESHEETPATH . '/_/inc/global/awards-strip.inc'); ?>	
		
	<article <?php post_class("content-section"); ?>>
		<div class="container-fluid">
						
			<div class="entry wide-entry">		
				<div class="main-txt">
					<h1 class="text-center"><?php the_title(); ?></h1>
		
					<?php the_content(); ?>	
				</div>
			</div>
			
			<div class="search-form-wrap text-center">
			<?php get_search_form(); ?>
			</div>
			
			<?php include (STYLESHEETPATH . '/_/inc/site-map/vars.inc'); ?> 
	
			<section id="site-map-lists">
			<!-- Left -->
			<?php include (STYLESHEETPATH . '/_/inc/site-map/site-map-list-left-col.inc'); ?> 
			
			<!-- Right -->
			<?php include (STYLESHEETPATH . '/_/inc/site-map/site-map-list-right-col.inc'); ?>
			</section>

		</div>
	</article>

	<?php include (STYLESHEETPATH . '/_/inc/global/footer-info.inc'); ?>	
	
 </main>
		
<?php endwhile; ?>
<?php endif; ?>
	
<?php get_footer(); ?>
