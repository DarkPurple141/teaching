---
layout: code
---
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_TRIES 3

int readValue(void);

int main(void) {
  int x = 0;
  int numTries = 0;

  // our loop will exit eventually.
  while (x <= 0 && numTries != MAX_TRIES) {
    x = readValue();
    numTries = numTries + 1;
  }

  // did we exit because we ran out of tries, or because we were successful
  if (numTries == MAX_TRIES) {
    printf("We've locked you out you goose!\n");
  } else {
    printf("Nice work!\n");
  }

  return EXIT_SUCCESS;
}

// read a value once.
int readValue(void) {
  int number = 0;
  printf("Please enter a positive number: ");
  scanf("%d",&number);
  return number;
}

```
