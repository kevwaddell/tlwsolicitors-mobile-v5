<?php 
$post_thumbnail_id = get_post_thumbnail_id($img_post);
$banner_feat_full_src = wp_get_attachment_image_src($post_thumbnail_id, 'full' );
$banner_feat_thumb_src = wp_get_attachment_image_src($post_thumbnail_id, 'thumbnail' );

$freephone_num = get_field('freephone_num', 'options');
$office_tel = get_field('office_num', 'options');
$fax = get_field('main_fax', 'options');
$email = get_field('main_email', 'options');
//echo '<pre class="debug">';print_r($img);echo '</pre>';
?>
<section class="contact-links contact-us-banner full-bg-img" data-src="<?php echo $banner_feat_full_src[0]; ?>" style="background-image: url(<?php echo $banner_feat_thumb_src[0];?>)">
	<div class="container-fluid">
		<div class="intro">
			<p class="header text-center">We can help 24/7 365 days a year</p>
			<p class="text-center">You can contact us using any of the following methods.</p>
		</div>
		
		<div class="contact-info">
			<a href="tel:<?php echo str_replace(" ", "", $freephone_num); ?>" class="contact-info-link"><i class="fa fa-phone"></i>Freephone: <?php echo $freephone_num; ?></a>
			<div class="contact-info-label"><i class="fa fa-fax"></i>Fax: <?php echo $fax; ?></div>
			<a href="tel:<?php echo str_replace(" ", "", $office_tel); ?>" class="contact-info-link"><i class="fa fa-building-o"></i>Office: <?php echo $office_tel; ?></a>
			<a href="mailto:<?php echo $email; ?>" class="contact-info-link"><i class="fa fa-envelope-o"></i><?php echo $email; ?></a>
			<a href="#request-a-callback" class="contact-info-link jump-2-link"><i class="fa fa-paper-plane-o"></i>Request a Callback</a>	
		</div>
	</div>		
	<div class="img-overlay"></div>
	<div class="top-drk-grad"></div>
</section>