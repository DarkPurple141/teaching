---
layout: default
title: Generic
basename: _generic.html
stub: A description that of less than 50 chars
---
This is a post on Generic.

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
