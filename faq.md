---
layout: list_index
title: FAQ
long-title: Frequently Asked Questions
permalink: /FAQ/
description: Where you'll find mini-articles on different topics.
basename: notes
---
{% for post in site.notes %}
  {% if post.title != page.title and post.title != "Index" %}
* [{{post.title}}]({{ post.url }}): {{post.excerpt | strip_html}}
  {% endif %}
{% endfor %}
