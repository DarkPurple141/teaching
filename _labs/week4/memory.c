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
  printf("In main y = %p\n", &y);
  printf("Spacing between x and y = sizeof(int) == %lu == %d\n",
    sizeof(int), (int)(&x) - (int)(&y));

  myFunction(x);

  return EXIT_SUCCESS;
}

void myFunction(int x) {
  // note the memory address here is not the same.
  printf("In myFunction x = %p\n",&x);
}
