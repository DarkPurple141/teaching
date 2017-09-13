---
layout: code
---
```c
#include <assert.h>
#include <stdio.h>
#include "questions.h"

void testQ1() {
  printf("Tests for Q1\n");
  int arrayOne[1] = {1};
  assert(countFavourite(1, arrayOne) == 0);

  int arrayTwo[4] = {1, 17, 17, 17};
  assert(countFavourite(4, arrayTwo) == 3);

  int arrayThree[6] = {0, 1, 2, 3, 17, 34};
  assert(countFavourite(6, arrayThree) == 3);
  printf("Q1 tests passed\n");

}

void testQ2() {
  printf("Tests for Q2\n");

  char * str = "loL";
  assert(containsUppercase(str) == TRUE);
  str = "jeff";
  assert(containsUppercase(str) == FALSE);
  str = "";
  assert(containsUppercase(str) == FALSE);
  str = "Your toast is burnt, and no amount...";
  assert(containsUppercase(str) == TRUE);

  printf("Q2 tests passed\n");
}

void testQ3() {
  printf("Q3 tests starting..\n");

  int arr[6] = {0, 1, 2, 3, 4, 11};
  assert(findDuplicate(5, arr) == NO_DUPLICATE);
  int arrayTwo[2] = {2, 2};
  assert(findDuplicate(2, arrayTwo) == 2);
  printf("Q3 tests passed..\n");
}

void runTests() {
  printf("Running Tests...\n\n");
  testQ1();
  testQ2();
  testQ3();
  printf("All tests passed, you god.\n");
}

int main(int argc, char *argv[]) {
  runTests();
  return 0;
}
```
