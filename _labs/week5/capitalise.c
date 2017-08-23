// Alexander Hinds, z3420752
// capitalise the lowercase ascii letters

#include <stdio.h>
#include <stdlib.h>

char capitalise(char c);

int main(void) {
  char c = 0;
  while (c != EOF) { // -1
    c = getchar();
    c = capitalise(c);
    putchar(c);
  }
  return EXIT_SUCCESS;
}

// read a value once.
char capitalise(char c) {
  if (c >= 'a' && c <= 'z') {
    c = c - 32;
  }
  return c;
}
