<?php include (STYLESHEETPATH . '/_/inc/landing-page/head-html.inc'); ?>	

<body id="landing-page" <?php body_class('atfc-mobile-css'); ?>>
<?php if ($_SERVER['SERVER_NAME']=='tlwsolicitors.staging.wpengine.com') { ?>
<!-- Google Tag Manager (noscript) -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-PDNR9J"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) -->
<?php } ?>
<?php if ($_SERVER['SERVER_NAME']=='www.tlwsolicitors.co.uk') { ?>
<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-PLBR4F"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager -->
<?php } ?>

<?php 
$color = get_field('page_colour', $post->ID);
$tag_line = get_field('tag_line', 'options');
?>
	
<div class="tlw-wrapper">
	<!-- HEADER LOGO AND NAVIGATION -->
	<header class="header abs-header" role="banner">

		<div class="header-inner">
			<div class="container-fluid">
				<p class="text-hide logo"><a href="<?php echo get_option('home'); ?>/"><?php bloginfo('name'); ?></a></p>
			</div>
		</div>
				
	</header>