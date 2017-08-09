---
layout: default
title: Abstraction
basename: 17_abstraction.html
stub: What is abstraction and how does it apply to programming?
---
## What is abstraction and how does it apply to programming?

Abstraction is the concept of properly targeting our thinking around the level that
makes most the contextual sense. It allows us to drill down and become more specific,
or break out into broader more general concepts.

You use it everyday; let's say you're at the train station and you need to buy a train ticket.

You would simply ask:
> "Can I have a ticket for the train please?".

But you could equally say:
> "I need a piece of paper that holds ticketing information that will allow me to travel on the train
from A to B"

It's impractical and somewhat confusing to say the latter, but its the latter that is implied
and understood by the former.

## Abstraction in programming

In programming, abstraction allows us to break our software into different levels of logic
appropriate for the context of the software. For example, using [functions](17_functions.html),
we might be building a mail application.

At the top level we could have functions like sendMail, retrieveMail. This is perhaps the level our user might interact with our software. It's uncomplicated and clear.

At a lower level we might have more increased complexity. 

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
