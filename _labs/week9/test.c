//#include <string.h>
#include <stdio.h>
#include "String_Header.h"

typedef struct _special {
  int x;
  int y;
  char z;
} special;

int main(int argc, char *argv[]) {

  char * myString = "Hello";
  char buffer[20];
  printf("This should print \"Hello\" actual: %s\n",
    strcpy(buffer, myString));

  printf("This should print \"Hello twice\" actual: %s\n",
    strcat(buffer, myString));

  printf("This should print the length of %s == %d\n",
    myString, (int)strlen(myString));

  printf("This should compare if %s and %s are equal, result: %d\n",
    myString, strcpy(buffer, myString), strcmp(buffer, myString));

  printf("sizeof(%lu)\n", sizeof(special));

  return 0;
}
