---
layout: default
title: Assignment 0 feedback
basename: 17_feedback.html
stub: Feedback for 17s2 assignment 0 (Timezones).
---
Given you guys did this a little while back some of the below will be no
longer relevant, but there were a few common mistakes that I thought
I'd highlight for your final assignment, and your C programming life going forward.

## Hash Defines

Broadly, any time you were doing a comparison of a city, I wanted to see:

```c
// comparison using the hash define
city == CITY_ADLELAIDE

// not like this
city == 9
```

While many *did* do this, not as many thought to extend it to months. The obvious ones here were:

```c
#define OCTOBER 10
#define APRIL 4
```
Not a big deal but would've helped readability.

## Functions
There were maybe a handful of you that used functions in a way that really made
sense consistently. Given this is your first assignment and functions were fairly fresh
this isn't really that surprising. Even so there were many common mistakes cropping up here.

A tip with functions, if you can't tell me in a sentence what it does, it's probably too complicated. Split the logic up, and think about what it is the function is actually trying to achieve.

Functions should summarise defined behaviours not simply move a piece of code
from somewhere else. A function should use a verb to make it clear what
it does and when it's used.

There were some obvious functions I would've used:

```c
// returns true or false given a city, month, day
int isDaylightSavings(int city, int month, int day)

// returns the relevant timezone for a city
int getTimeZone(int city)

// But to name a few...
```

## Multiple returns

Please don't use more than two returns in a function unless you're returning an
error or there are extraordinary circumstances.

```c
// Don't do this!
if (isJackaDullBoy() == TRUE) {
  return TRUE;
} else if (x < 1) {
  return FALSE;
} else if (x == 1) {
  return -1;
}

// could easily be written better as simply:
int returnVal = FALSE;

if (isJackaDullBoy() == TRUE) {
  returnVal = TRUE;
} else if (x < 1) {
  returnVal = FALSE;
} else if (x == 1) {
  returnVal = -1;
}

// single point of return makes logic considerably clearer.
return returnVal;
```

## If/Else Branching
Avoid getting too specific too quickly. I saw many assignments that had what amounted to the same conditions assessed multiple times.

```c
// BAD.
if (city == CITY_SYDNEY) {
  if (daylightSavings == TRUE) {
    // something else here.
  }
} else if (city == CITY_MELBOURNE) {
  if (daylightSavings == TRUE) {
    // something else here.
  }
} else if (city == CITY_CANBERRA) {
  if (daylightSavings == TRUE) {
    // something else here.
  }
} else if (city == CITY_AUCKLAND) {
  ///
}

// GOOD.
if (isDaylightSavings(city)) {
  if (isEasternCity(city)) {
    // something
  } else if (isNZcity(city)) {
    // something else
  }
}

```

Otherwise nice work overall and congrats on knocking off your first computing assignment.

{% if page.previous %}[{{ page.previous.title }}]({{ page.previous.url }})
\|{% endif %} [{{ page.next.title }}]({{ page.next.url }})
