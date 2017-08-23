---
layout: code
---
```c
// Alexander Hinds, z3420752
// swaps two values, then swaps them back again.

#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b);

int main(void) {

  int x = 5;
  int y = 10;

  swap(&x, &y);
  printf("%d %d\n", x, y);
  int * a = &x;
  int * b = &y;
  swap(a, b);

  printf("%d %d\n", x, y);

  return EXIT_SUCCESS;
}

// swaps two values
void swap(int * a, int * b) {
  int temp = *b;
  *b = *a;
  *a = temp;
  return;
}

```
