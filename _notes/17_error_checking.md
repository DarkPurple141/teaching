---
layout: default
title: Error Checking
basename: 17_error_checking.html
stub: A guide to some common methods of error checking for COMP1511 students
---

## Why is error checking critical?

Although errors might not be the biggest problem for you right now they will become more significant as you start to write larger and more complex programs, where it can be difficult to source the cause of the error.

So rather than deal with that let's get familiar with some common error checking methods.

## 0. Writing "good code"

One of the simplest ways of dealing with errors is to prevent them from occuring in the first place.

By writing good code you reduce the chances of introducing error into your program.

The style guide outlines some good practices to enforce this, but here are some other common problems:

* General poor style
    * Large blocks of logic in one place, bad or inconsistent identation, etc.
* Leaving variables unintialised
    * Remember to give a variable a starting value, ie int x = 0.
* Not accounting for unexpected input
    * Think about how your functions are used, and whether obvious use cases are being properly dealt with
* Forgetting to free memory
    * A more advanced concept that can cause unexpected behaviour in your program. Use free() to avoid this.
* Global variables
    * It's generally good practice to avoid using global variables because they can easily be misused, but if you do use them, always declare them with caps. ie, int MY_GLOBAL = 0;
    
## 1. The compiler is your friend

Despite how annoying the compiler may be at times with all its error/warning messages, it is just trying to be your friend!

Invest time into understanding error/warning output. It's worth it and will minimise your frustration when debugging. Understanding error outputs will allow you to quickly find and deal with your problem in the best possible way.

And, if you can, try to compile with dcc over gcc -- if you have it available. dcc picks up on a few extra issues that may cause issues, that gcc will happily overlook.

Finally, do not forget to compile as frequently as you can! It's much easier to deal with a few errors at a time, than hundreds all in one go. 

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

```bash
n value initalised
```

So we know the program got up to that point successfully before failing to exectute the loop, meaning the condition in the while loop must be false. Using this method we can analyse the execution flow of the program and pinpoint the source of our unexpected output.

### 2.1 Extending print debugging

Another common use of print debugging is to check the values of variables at various points in our program. In the below example we can check what's going on inside our adder function to see everything is as expected.

```c
int adder(int x, int y) {
    printf("Inside adder function\nx = %d, y = %d\n", x, y);
    return (x + y);
}
```


{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
