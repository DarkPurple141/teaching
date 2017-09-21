//#include <string.h>
#include <stdio.h>
#include "String.h"

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

  return 0;
}
