!function($){function n(){for(var n,t=window.location.href.slice(window.location.href.indexOf("?")+1).split("&"),e=0;e<t.length;e++)n=t[e].split("="),"gclid"===n[0]&&1===$("#input_23_12").length&&$("input#input_23_12").val(n[1]),"gclid"===n[0]&&1===$("#input_22_27").length&&$("input#input_22_27").val(n[1]),"gclid"===n[0]&&$.cookie(n[0],n[1],{expires:1,path:"/"})}var t,e="touchstart",o=!1;n(),$(document).ready(function(){function n(){t=setInterval(a,7e3)}function a(){var n=$(".tag-scroller").find(".active"),t=$(n).next();0===$(t).length&&(t=$(".tag-scroller-txt").eq(0)),$(n).fadeToggle(500).removeClass("active"),$(t).fadeToggle(1e3).addClass("active")}function s(){t=setInterval(i,7e3)}function i(){var n=$(".feedback-section-inner").find(".item.active"),t=$(n).next();0===$(t).length&&(t=$(".feedback-section-inner").find(".item").eq(0)),$(n).animate({left:"-100%"},500,function(){$(this).removeClass("active").css("left","100%")}),$(t).animate({left:"0%"},500,function(){$(this).addClass("active")})}$(".gform_wrapper form").submit(function(n){o?n.preventDefault():(o=!0,$("input[type='submit']",this).val("Processing, please wait..."))}),$(".selectpicker").selectpicker({style:"btn-default btn-lg hp-select",mobile:!0,size:5}),$(".selectpicker").find("select").selectpicker({style:"btn btn-group btn-default",mobile:!0,width:"100%"}),$("body").on(e,"button#user-btn",function(){return $(this).parent().hasClass("closed")?$(this).parent().removeClass("closed").addClass("open"):$(this).parent().removeClass("open").addClass("closed"),!1}),$("body").on(e,"button#nav-btn",function(){var n=$("#top-nav").find(".nav-wrapper").outerHeight();return $("#top-nav").hasClass("nav-closed")&&$("#top-nav").animate({height:n+"px"},200,function(){$(this).toggleClass("nav-closed nav-open").removeAttr("style")}),$("#top-nav").hasClass("nav-open")&&$("#top-nav").animate({height:"0px"},200,function(){$(this).toggleClass("nav-closed nav-open").removeAttr("style")}),!1}),$("#top-nav").on(e,"button#close-nav",function(){return $("#top-nav").animate({height:"0px"},200,function(){$(this).toggleClass("nav-open nav-closed").removeAttr("style"),$("li.with-sub-nav").removeClass("sub-open").addClass("sub-closed")}),!1}),$("#top-nav").on("click","li.with-sub-nav > a",function(){var n=$(this).parent(),t=$(n).siblings();return $(n).siblings().removeClass("sub-open").addClass("sub-closed"),$(t).find(".sub-open").length>0&&$(t).find(".sub-open").removeClass("sub-open").addClass("sub-closed"),$(n).toggleClass("sub-open sub-closed"),!1}),$("body").on(e,"button#file-download-btn",function(){var n=$(this).next();return $(n).toggleClass("form-open form-closed"),$("html, body").animate({scrollTop:$("button#file-download-btn").offset().top-30},500),!1}),$(document).bind("gform_confirmation_loaded",function(n,t){19===t&&1===$("a#download-booklet-btn").length&&($("a#download-booklet-btn").removeClass("hidden"),$("html, body").animate({scrollTop:$("button#booklet-download-btn").offset().top-20},500)),20===t&&1===$("#hidden-download").length&&($("#hidden-download").removeClass("hidden"),$(".gform_heading").addClass("hidden"),$("html, body").animate({scrollTop:$("#hidden-download").offset().top-20},500))}),$("body").on("click","li.with-sub-nav > a",function(){var n=$(this).parent();return $(n).siblings().removeClass("sl-tl-open").addClass("sl-tl-closed"),$(n).hasClass("top-level")&&$(n).find(".sl-tl-open").removeClass("sl-tl-open").addClass("sl-tl-closed"),$(n).toggleClass("sl-tl-open sl-tl-closed"),!1}),$("body").on(e,"a#search-btn",function(){return $("#search-pop-up").hasClass("off")&&$("#search-pop-up").removeClass("off").addClass("on"),!1}),$("body").on(e,"button#close-search",function(){return $("#search-pop-up").hasClass("on")&&($("#search-pop-up").removeClass("on").addClass("turn-off"),$(".turn-off").one("webkitAnimationEnd mozAnimationEnd MSAnimationEnd oanimationend animationend",function(){$(this).removeClass("turn-off").addClass("off")})),!1}),$("body").on(e,"button#continue-read-btn",function(){var n=$("#content-extra-inner").outerHeight();return $("button#continue-read-btn").addClass("hidden"),$("#content-extra").animate({height:n+"px"},500,function(){$("#content-extra").removeClass("closed").addClass("open").removeAttr("style")}),!1}),$("body").on(e,"button#close-content-extra-btn",function(){var n=$("#content-extra-inner").parent().position().top;return $("button#continue-read-btn").removeClass("hidden"),$("main").animate({scrollTop:n},500),$("#content-extra").animate({height:"0px"},500,function(){$("#content-extra").removeClass("open").addClass("closed").removeAttr("style")}),!1});var l=function(){1===$("#xmas-popup-wrap").length&&$("#xmas-popup-wrap").hasClass("pop-up-inactive")&&($("#xmas-popup-btn-wrap").removeClass("pop-up-inactive").addClass("pop-up-active"),$("#xmas-popup-wrap").fadeIn("slow",function(){$(".xmas-popup-inner").removeClass("hidden").addClass("animated slideInUp")}))};$(".xmas-popup-inner").one("webkitAnimationEnd mozAnimationEnd MSAnimationEnd oanimationend animationend",function(){$(this).hasClass("bounceOutDown")&&($("#xmas-popup-wrap").fadeOut("fast").removeClass("pop-up-active").addClass("pop-up-inactive"),$("#xmas-popup-btn-wrap").removeClass("pop-up-active").addClass("pop-up-inactive"),$(this).removeClass("animated bounceOutDown").addClass("hidden"))}),$("body").on(e,"button#xmas-popup-btn-open",function(){return l(),!1}),$("body").on(e,"button#close-xmas-popup",function(){return $(".xmas-popup-inner").removeClass("slideInUp").addClass("bounceOutDown"),!1}),$("body").on(e,"button#close-awards-btn",function(){return $(this).parent().removeClass("open").addClass("closed"),!1}),$("body").on(e,"#awards-pop-up",function(){$("button#close-awards-btn").trigger(e)}),n(),1===$(".feedback-section-wrapper").length&&s(),$(".team-profile").on(e,"button.profile-info-btn",function(){return $(this).parents(".team-profile").siblings().find(".profile-txt").removeClass("txt-view").addClass("txt-hide"),$(this).parent().toggleClass("txt-hide txt-view"),!1}),$("body").on(e,"button.view-faq-btn",function(){return $(this).parent().toggleClass("open closed"),!1})}),$(window).bind("load",function(){$(".full-bg-img").each(function(n,t){var e=$(t).data("src");void 0!==e&&$(t).css("background-image","url("+e+")")})})}(window.jQuery);