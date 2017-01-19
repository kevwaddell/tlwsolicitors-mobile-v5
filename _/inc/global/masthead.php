<header class="header" role="banner">	
	<?php 
	$tag_line = get_field('tag_line', 'options');	
	?>

	
	<div class="header-inner">
			
		<div class="text-hide logo"><a href="<?php echo get_option('home'); ?>/"><?php bloginfo('name'); ?></a></div>
		
		<div class="header-action-btns pull-right">
			<button id="nav-btn" class="btn btn-default in-active"><span class="sr-only">Menu</span><i class="fa fa-bars fa-lg"></i></button>
		</div>
	
	</div>
			
</header>
