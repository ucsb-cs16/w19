---
title: CS32, Fall 2018, Richert Wang (testbios)
---

# {{site.course}}, {{site.quarter}}

## testbios


<style>
table.bios * td {
 padding: 0.2em;
}
p.staff-bio { max-width: 70em; /* http://maxdesign.com.au/articles/ideal-line-length-in-ems/ */
              padding: 0.5em;
	    }
</style>

<div data-role="collapsible" data-collapsed="true">
<h2 id="bios">Course Staff Bios:</h2>
<table class="bios">
<tr><th>Name</th><th>Role</th><th>Bio</th></tr>
{% for b in site.bios %}
<tr><td><a href="{{b.url}}"  data-ajax="false">{{b.name }}</a></td><td>{{b.role}}</td><td><p class="staff-bio">{{b.bio}}</p></td></tr>
{% endfor %}
</table>
</div>

