
<?php if (is_home() || is_archive() || is_single()) { ?>

<form role="search" method="get" id="searchform" action="<?php echo home_url( '/' ); ?>">
		
	<input type="hidden" name="post_type" value="post" />
	
	<input type="search" value="<?php the_search_query(); ?>" placeholder="Search…" class="search-query form-control" name="s" id="s" />
	
		
	<div class="search-btn-wrap">
	 <button type="submit" id="searchsubmit" class="search-submit">Start search<i class="fa fa-angle-right fa-lg btn-pointer"></i> </button>
	</div>
  	
</form>

<?php } else { ?>

<form role="search" method="get" id="searchform" action="<?php echo home_url( '/' ); ?>">
  <label class="sr-only" for="s">Search</label>
  <input type="search" value="<?php the_search_query(); ?>" placeholder="Search…" class="form-control search-query" name="s" id="s" />
  
  <div class="search-btn-wrap">
	  <button type="submit" id="searchsubmit" class="search-submit">Start search<i class="fa fa-angle-right fa-lg btn-pointer"></i> </button>
  </div>
</form>	
	
<?php } ?>