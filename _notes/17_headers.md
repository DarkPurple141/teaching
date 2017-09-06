---
layout: default
title: Headers
basename: 17_headers.html
stub: Understanding the use and application of header files
---
## Understanding the use and application of header files

Header files fulfil a few key features of helping us achieve good modular code:

* They allow us to seperate out our related logic
* They allow us to reuse or not use elements of logic in different files as we see fit
* They provide an agreed common interface

### System Headers (<sys.h>)
These are your run of the mill <stdio.h> type files. Though we don't strictly know
what's in the underlying c-code that implements these libraries they do provide
a singular common interface for us to use functions like printf() or defines like
EXIT_SUCCESS.

### Your own headers ("myHeader.h")
Your own headers allow you to support more complex programs in c that require
separated logic being used across multiple files.

## NB
Header files are a sort of contract that you're making with compiler.
> "I will implement this library elsewhere in another c file"

As long as you do actually implement the library (and compile your program with it)
you can include and use the library in as many places as you see fit in other c-files.

The power of this won't be immediately obvious, but trust us, it's powerful af.

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
