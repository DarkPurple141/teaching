---
layout: list_index
description: Where you'll find mini-articles on different topics.
basename: notes
---
{% for post in site.notes %}
  {% if post.title != page.title %}
* [{{post.title}}]({{ post.basename }}): {{post.excerpt | strip_html}}
  {% endif %}
{% endfor %}

[Main Menu]({{site.url}})
