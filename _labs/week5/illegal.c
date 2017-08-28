#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char * y = "hello";
  int z = 0;
  while (*y++ != '\0') z++;

  printf("%d\n", z);

  return EXIT_SUCCESS;
}
