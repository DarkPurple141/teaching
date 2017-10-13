---
layout: my_default
permalink: /
---

This website is devoted to providing additional teaching resources for those that
love/enjoy/need computer science. If there are any resources you feel you'd like to see
but are currently missing, please flick me an email or log an issue on the site's
[github]({{ site.github_username | prepend:'https://github.com/' | append: site.github_project}}).

### Linux and Conceptual things
{% for post in site.notes %}{% if post.title != "Index" %}
* [{{post.stub}}]({{ post.url }}){% endif %}{% endfor %}

### Code
All your C needs.

* [Week 2](labs/week2) (If/Else statements)
* [Week 3](labs/week3) (Functions)
* [Week 4](labs/week4) (Loops)
* [Week 5](labs/week5) (Arrays and Strings)
* [Week 6](labs/week6) (Structs, BMPs and basic web servers)
* [Week 7](labs/week7) (Malloc, Mandelbrot)
* [Week 8](labs/week8) (Exam Qs, Testing)
* [Week 9](labs/week9) (ADTs, Coffee ADT)
* [Week 11](labs/week11) (Intro to Lists)
