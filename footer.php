	
		<!-- FOOTER START -->
		<section id="footer-info">
		
			<footer class="container-fluid">
										
			<div class="notices">
				<span>Authorised and regulated by the <a title="Solicitors Regulation Authority" href="http://www.sra.org.uk" target="_blank">Solicitors Regulation Authority</a>.<br /> 
				&copy; <?php echo date("Y"); ?> <?php bloginfo( 'name' ); ?>. All rights reserved.</span>
			</div>
			
			<?php wp_nav_menu(array( 'container_class' => 'social-links clearfix', 'theme_location' => 'social_links_menu', 'fallback_cb' => false ) ); ?>
				
			</footer>
			
		</section>
		
</div><!-- MAIN WRAPPER END -->
		
		<?php include (STYLESHEETPATH . '/_/inc/global/no-script.php'); ?>
		
		<?php include (STYLESHEETPATH . '/_/inc/global/search-pop-up.inc'); ?>
		
		<?php include (STYLESHEETPATH . '/_/inc/contact-us/route-finder-modal.inc'); ?>
		
		<?php include (STYLESHEETPATH . '/_/inc/xmas/pop-up.inc'); ?>
				
		<?php wp_footer(); ?>

	</body>
</html>