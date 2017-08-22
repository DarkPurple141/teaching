---
layout: code
---
```c
#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 20

void printString(char * string);

int main(void) {
  // ascii is an early encoding for numbers into common characters
  // You can find the way it maps by typing "ascii" into your terminal

  // Strings
  //'\0' == 0 these are the same
  char string1[STRING_SIZE] = {68, 111, 103, 0};
  printf("%s\n", string1); // prints Dog
  int i = 0;
  while (i < 4) {
    printf("%d ", string1[i]);
    i++;
  }
  printf("\n"); // prints 68, 111, 103, 0

  printString(string1); // prints Dog

  char string2[STRING_SIZE] = {'D', 'o', 'g', '\0'};
  printString(string2); // prints Dog

  char string3[STRING_SIZE] = "Dog";
  printString(string3); // prints Dog

  char *string4 = "Dog";
  printString(string4); // prints Dog

  return EXIT_SUCCESS;
}

// prints a string
void printString(char * string) {
  int i = 0;
  while (i < STRING_SIZE && string[i] != '\0') {
    printf("%c",string[i]);
    i++;
  }
  printf("\n");
}

```
