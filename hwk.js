---
layout: null
---


  

$(document).ready(function(){
    console.log("hwk.js: document is ready");

    $('.pagebreak').each(function() {
	$('.hwk-page-header-template').first().clone().appendTo($(this));
    });

    $('td.page-num').each(function(i) {
	$(this).html(i+1); // re-calculate page numbers
    });
    
    console.log("hwk.js: done");
});
