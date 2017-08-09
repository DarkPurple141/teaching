// Alexander Hinds, z3420752
// alex.hinds141@gmail.com
// program to translate words.

#include <stdlib.h>
#include <stdio.h>

#define FALSE 0

int main(int argc, char *argv[]) {
  printf("argc = %d\n", argc);
  printf("argv = %s\n", argv[0]);

  return EXIT_SUCCESS;
}

char myCoolFunction(void) {
  return 10007;
}

char atheneIsSoCool(char coolFactor) {
  return 7;
}

int function(int, int);
void function(char, char);
int function(char x, int y);
