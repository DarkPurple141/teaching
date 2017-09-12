#include <assert.h>
#include <stdio.h>
#include "questions.h"

void testQ1 (void) {

  printf("Starting Q1 tests...\n\n");
  int testOne[3] = {1, 1, 1};
  assert(countFavourite(3, testOne) == 0);

  int testArray[8] = {16, 7, 18, 12, 13, 17, 21, 34};
  assert(countFavourite(8, testArray) == 2);

  int testTwo[1] = {0};
  assert(countFavourite(1, testTwo) == 1);

  int testThree[3] = {17, 17, 17};
  assert(countFavourite(3, testThree) == 3);
  printf("Q1 tests passed\n");

}
void testQ2 (void) {
  printf("Starting Q2 tests!\n\n");
  assert(containsUppercase("jeff") == FALSE);
  assert(containsUppercase("Jeff") == TRUE);
  assert(containsUppercase("") == FALSE);
  printf("Q2 tests passed\n");
}
void testQ3 (void) {
  printf("Starting Q3 tests!\n\n");
  int myArray[6] = {3, 1, 4, 1, 5, 9};
  assert(findDuplicate(6, myArray) == 1);

  int sixSix[2] = {6, 6};
  assert(findDuplicate(2, sixSix) == 6);

  int none[5] = {1, 2, 3, 4, 5};
  assert(findDuplicate(5, none) == NO_DUPLICATE);
  printf("Q3 tests passed\n");
}

int main(int argc, char *argv[]) {
  testQ1();
  testQ2();
  testQ3();
  printf("All tests passed you are awesome!\n");

  return 0;
}
