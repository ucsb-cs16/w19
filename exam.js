---
layout: null
---




$(document).ready(function(){
    console.log("exam.js: document is ready");


    $('.page-break-before').each(function() {
	var prev = $(this).prev();
	var $div = $("<div>", {class: "pagebreak"});
	prev.append($div);
	$('.exam-page-header-template').first().clone().appendTo($div);
	$('.exam-name-header-template').first().clone().appendTo($div);
	prev.css('margin-bottom','0');
    });


    $('td.page-num').each(function(i) {
	var pageNum = i+1;
	$(this).html(pageNum); // re-calculate page numbers
	$(this).data("pageNum",pageNum);
	if (pageNum % 2==0) {
	    $(this).parents(".pagebreak").find(".exam-name-header-table").css("display","none");
	}
    });

    console.log("exam.js: done");
});
