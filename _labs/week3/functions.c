// Alexander Hinds, z3420752
// alex.hinds141@gmail.com

#include <stdio.h>
#include <stdlib.h>

// checks whether a number is greater than two.
void isGreaterThanTwo(int number);

// checks a number is read and then runs the isGreater function
int checkRead(void);

int main(int argc, char *argv[]) {
  // this number has no relation to the number in our function.
  int number = 7;
  printf("%d <--- error status\n", checkRead());

  // our number doesn't change even though our functions have similar var names
  printf("Our number is still %d (should be 7 or will it?)\n",number);
  printf("We're done!\n");

  return EXIT_SUCCESS;
}

int checkRead(void) {
  int number;
  printf("Please enter a number: ");
  if (scanf("%d", &number) != 1) {
    printf("An error occurred\n");
    return 0;
  } else {
    isGreaterThanTwo(number);
  }
  return 1;
}

void isGreaterThanTwo(int n) {
  if (n > 2 ) {
    printf("%d > 2\n", n);
  } else {
    printf("%d is not > 2\n", n);
  }
}
