---
layout: default
title: Error Checking
basename: _error_checking.html
stub: A guide to some common methods of error checking for COMP1511 students
---

## Why is error checking critical?

Although errors might not be the biggest problem for you right now they will become more significant when you start to write larger and more complex programs where it can be very difficult to source the cause of the error.

So rather than deal with that let's get familiar with some good error checking methods :)

## 0. Writing "good code"

One of the simplist ways of dealing with errors is to prevent them from occuring in the first place.

By writing good code you reduce the chances of introducing error into your program.

The style guide outlines some good practices but here are some common sources of error:

* General poor style (Large sections of code, bad identation, etc.)
* Leaving variables unintalised
* Not accounting for unexpected input
* Forgetting to free memory
* Global variables

## 1. Compiler

Despite how annoying the compiler may be at times, with all it's error/warning messages, it is just trying to be your friend!

Invest time into understanding error/warning output. It's worth it.

If you can, preferably compile with dcc over gcc. dcc just picks up on a few extra things that may cause issues.

Do not forget to compile relatively frequently! It's much easier to deal with a few errors at a time.

## 2. Printing output

Printing output is a useful method when your program gives an unexpected output. It allows us to see the "flow" of the program with the output acting as markers to highlight where the program is going.

In this example for instance our output is not the "One loop" expected.

```c
int n = 0;
printf("n value initalised\n", );

while( n == 0 ) {
    printf("One loop\n", );
    n++;
}
```
Instead we get the output:

bash n value initalised

So we know the program got up to that point successfully before failing to exectute the loop, meaning the condition in the while loop must be false. Using this method we can analyse the execution flow of the program and pinpoint the source of our unexpected output.



{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
