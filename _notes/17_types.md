---
layout: default
title: Types and Memory
basename: 17_types.html
stub: Why do we use "types" in C?
---
Types are likely to give you all sorts of headaches as a beginner programmer --
and it's not surprising -- they're far from intuitive.

Some of the more puzzling aspects are summarised below:
```c
// take these two ints -- surely we can divide them in two?
int x = 1;
int y = 2;
x / y // this equals 0, not 0.5

// now let's set x to a float
x = 0.5 // sets x to 0 as it can't be a float
2*x == 0; // ???

// what about setting an int to its max value
x = 2147483647;
x = x + 1 // now x = -2147483648;
```
None of these results are immediately obvious. If you play around yourself some more
you'll likely run into many more equally puzzling results.
> Why does C have limits on values it can store?

> Why does C have to specify types?

> How to floats and ints differ? Aren't they just numbers?

The short answer to all these questions is a consequence of the we store data in memory. C uses <code>types</code> to help interpret blocks of binary digits.

### Consider the ```char```

A ```char``` in C is 1 byte. This means it is granted eight binary digits to
use in encoding a number/character/piece of data.
Eight binary digits is equivalent to 256 discrete values.
We can have the values ->
0000 0000 to 1111 1111.

This isn't the whole story however. ```char``` as with many types in C is signed,
which means it holds negative and positive values. Our 256 discrete values now has to be halved on each side of the ledger.
128 positive and 128 negative. In doing so we're, in practice encoding a bit of our ```char``` with the sign of the value.

So for the above, we can rewrite our bits like this:

1. **1** 000 0000 // the leading 1 indicates (-)
2. **0** 000 0001 // otherwise positive

There are other rules for floats too. You can
read more on those [here][1]. In essence however as with our sign example above,
specific bits must be associated with storing
the fractional and non-fractional part of the floating point number.
This means we lose bits to store magnitude but we gain bits to store the floating point.

### What does this all mean?
The thing worth remembering here is that
all of these decisions are tradeoffs.
If we need to get a floating point number
in our program we will have to accept a smaller range of possible magnitude.
If we want do division and gain precision to the remainder result, we'll need a float.

What's also worth understanding is that we can
try and interpret a ```float``` as an ```int``` or an ```int``` as a ```float``` by interpreting only the relevant bits to each.
But!!! it will come at the cost of truncating bits.

[1] : http://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)FloatingPoint.html

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }}) \|{% endif %}
[{{ page.next.title }}]({{ page.next.url }})
