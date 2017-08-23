// Alexander Hinds, z3420752
// setArray with a value.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ARRAY_LENGTH 20

void setArrayValues(int length, int array[], int value);
void testProgram(int length, int array[], int value);

int main(int argc, char *argv[]) {

  int array[ARRAY_LENGTH];
  setArrayValues(ARRAY_LENGTH, array, 2);
  testProgram(ARRAY_LENGTH, array, 2);
  return EXIT_SUCCESS;
}

void setArrayValues(int length, int array[], int value) {

  int i = 0;
  while (i < ARRAY_LENGTH) {
    array[i] = value;
    i++;
  }

}

void testProgram(int length, int array[], int value) {
  printf("Testing whether value is in every index of the array\n");
  int i = 0;
  while (i < length) {
    assert(array[i] == value);
    i++;
  }
  printf("All tests passed! You are a god!\n");
}
