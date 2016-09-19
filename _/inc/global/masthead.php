<header class="header" role="banner">	
	<?php 
	$tag_line = get_field('tag_line', 'options');	
	?>

	
	<div class="header-inner">
			
		<?php if (is_front_page()) { ?>
		<h1 class="text-hide logo"><a href="<?php echo get_option('home'); ?>/"><?php bloginfo('name'); ?></a></h1>
		<?php } else { ?>
		<p class="text-hide logo"><a href="<?php echo get_option('home'); ?>/"><?php bloginfo('name'); ?></a></p>
		<?php } ?>
		
		<div class="header-action-btns pull-right">
			<button id="nav-btn" class="btn btn-default in-active"><span class="sr-only">Menu</span><i class="fa fa-bars fa-lg"></i></button>
		</div>
	
	</div>
			
</header>
