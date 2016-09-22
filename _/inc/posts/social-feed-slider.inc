<section class="social-feed">
	<div id="social-feed-carousel" class="carousel slide" data-ride="carousel">
		<div class="carousel-inner" role="listbox">
			<div class="item active twitter">
				<i class="fa fa-twitter bg-col-twitter"></i>
				<?php echo do_shortcode('[wp_rss_multi_importer category="2" showgroup="1"]'); ?>
			</div>
<!--
			<div class="item google-plus">
				<i class="fa fa-google-plus bg-col-google-plus"></i>
				<?php echo do_shortcode('[wp_rss_multi_importer category="1" showgroup="1"]'); ?>
			</div>
-->
			<div class="item facebook">
				<i class="fa fa-facebook-f bg-col-facebook"></i>
				<?php echo do_shortcode('[wp_rss_multi_importer category="3" showgroup="1"]'); ?>
			</div>
		</div>
	</div>
</section>