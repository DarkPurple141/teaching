// Alexander Hinds, z3420752
// delete0s

#include <stdio.h>
#include <stdlib.h>

#define STRING_MAX 20

void deleteOs(char *string);

int main(int argc, char *argv[]) {

  char c[STRING_MAX];
  while (scanf("%s", c) == 1) {
    deleteOs(c);
  }

  return EXIT_SUCCESS;
}

void deleteOs(char *string) {
  int index = 0;

  putchar('\n');
}
