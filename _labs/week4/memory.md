---
layout: code
---
```c
// Alexander Hinds, z3420752
// Basic memory things.

#include <stdio.h>
#include <stdlib.h>

void myFunction (int x);

// program demonstrates how memory is different in the scope of functions.
int main(int argc, char *argv[]) {
  int x = 0;
  int y = 0;
  printf("In main x = %p\n", &x);
  printf("In main y = %p\n", &y); // 4 bytes from x

  // spacing and sizeof
  printf("Spacing between x and y = sizeof(int) == %lu == %d\n",
    sizeof(int), (int)(&x) - (int)(&y));
  myFunction(x);

  // Now let's quickly go over some overflowing and understand why.
  // Let' use a char for simplicity.
  char overflow = 0;
  printf("sizeof char == %d\n", sizeof(overflow)); // this will equal '1'

  // what this actually is saying is a char is 8 bits long ie;
  // 0000 0000. This means the max value in bits we can represent is 1111 1111
  // At least in theory. But! 1111 1111 is actually -128. Why!? because chars
  // have a sign and that sign is stored in a bit.
  // Like this: 1 111 1111 <---- Which means the max value we can reach is
  // 111 1111 (which is 127)
  overflow = 128;
  printf("This will print %d not 128!\n", overflow); // prints -128!
  // however if we use an unsigned char instead we can use 0-255.
  unsigned char overflow2 = 128;
  printf("This will print %d as expected\n", overflow2); // prints 128
  // But when we overflow (at 255 + 1) we will wrap back to 0.
  overflow2 = 256;
  printf("This will print %d, not 256\n",overflow2); // prints 0

  return EXIT_SUCCESS;
}

void myFunction(int x) {
  // note the memory address here is not the same.
  printf("In myFunction x = %p\n", &x);
}

```
