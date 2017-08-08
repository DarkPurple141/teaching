---
layout: default
title: Main
basename: 17_main.html
stub: Understanding the different ways to express int main() in C.
---
## Understanding the different ways to express int main() in C
One of the key sources of first time programmers tackling C (or other languages like java etc)
is the very scary looking way we express our main function ie.
```c
// legit what the?
int main (int argc, char * argv[]);
```
This is totally unintelligible for the novice programmer, particularly when you've not
done things like functions, arrays or even strings! Usually, teachers start by using the simpler
int main(void) to not overly scare you. But even that's probably a little puzzling.

### Let's break it down
You should think of main like any other function in c. BTW: If you don't know what a function is,
you should probably read [this](17_functions.html) first.

If you think of it as a function, this whole "int argc", "char * argv[]" part simply becomes
the parameters of the function. But what do they represent?

Well, to end the mystery, they're the command line arguments. You know when you do something like this in linux.
```bash
mkdir myFolder
```
You're actually running a program called mkdir, which has a single argument "myFolder".
In a C program, we're likely to do something like this.
```bash
./program
```
But it would be equally valid, **even useful**, to run our program like this.
```
./program myDataFolder "myName"
```
Which would pass the arguments, myDataFolder and "myName" to our program. These
are accessible via argv. argv[0] is our program name, argv[1] corresponds to myDataFolder and argv[2] corresponds to "myName".

argc on the other hand is the number of arguments that we're passed. argc is literally
argument count.

You can test this yourself (and I encourage you to do so) by writing a simple program yourself and printing out argc and argv. They're really not all that mysterious.

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
