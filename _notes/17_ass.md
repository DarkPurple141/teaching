---
layout: default
title: Assignment 1 Notes
basename: 17_ass.html
stub: Some tips and tricks for Assignment 1
---
## A few things

Was noticing a few common errors stemming from trying to do too much too quickly.
Make sure that each function in each file of your code is working correctly by writing
and compiling them separately and slowly.

A simple thing to do here to make sure you're on the right track is to be able to
at least print the Mandelbrot like we did in the week 7 tute to the terminal.

If you can't do that, you've probably got other problems.

When in doubt, please printf values to check how your program is executing.

## You're allowed to use sscanf

One thing that I've only just been made aware of is the use of `sscanf` is allowed.

What's sscanf? It's a library function that allows you to parse a string in a simple way.

For details look it up online but it takes a string, a formatted string, and some variables
which you're scanning into. (Similar to scanf)

Eg. Say I had:
```c
char * string = "Hey Alex, you're born in 1900 right, lol?";
char * special;
int date;
sscanf(string, "Hey %s, you're born in %d right," %s, %d);
// special now = Alex
// data = 1900.
```

Pretty useful. Say, for the routing function....

Finally please use this code that was given to you [here](https://www.cse.unsw.edu.au/~cs1511/17s2/assignments/assign1/simple-server-response/). It's essentially complete.

```c
static void serveHTML (int socket) {
   char* message;

   // first send the http response header
   message =
      "HTTP/1.0 200 Found\n"
      "Content-Type: text/html\n"
      "\n";
   printf ("about to send=> %s\n", message);
   write (socket, message, strlen (message));

   message =
      "<script src=\"http://almondbread.cse.unsw.edu.au/tiles.js\"></script>"
      "\n";
   write (socket, message, strlen (message));
}
```

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
