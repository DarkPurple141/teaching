---
layout: code
---
```c
// Alexander Hinds, z3420752
// alex.hinds141@gmail.com
// program to translate words.

#include <stdlib.h>
#include <stdio.h>

// this function translates a number to words.
// It takes in a number (int) and outputs a string.
void translateToWords(int number);

int main(int argc, char  *argv[]) {
  // read in some numbers
  printf("Please enter two numbers between -10 and 10: ");
  int x; int y;
  scanf("%d %d",&x,&y);

  printf("x is ");
  translateToWords(x);

  printf("And y is ");
  translateToWords(y);

  return 0;
}

void translateToWords(int number) {
  // this function translates a number to words.
  // It takes in a number (int) and outputs a string.
  if (number < 0) {
    printf("Negative ");
    number = -number;
  }
  if (number == 1) {
    printf("One");
  } else if (number == 2) {
    printf("Two");
  } else if (number == 3) {
    printf("Three");
  } else if (number == 4) {
    printf("Four");
  } else if (number == 5) {
    printf("Five");
  } else if (number == 6) {
    printf("Six");
  } else if (number == 7) {
    printf("Seven");
  } else if (number == 8) {
    printf("Eight");
  } else if (number == 9) {
    printf("Nine");
  } else if (number == 0) {
    printf("Zero");
  }
  printf("\n");

}
```
