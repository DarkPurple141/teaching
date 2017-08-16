// Alexander Hinds, z3420752
// Tutorial 4, Looping
// Will print a cross as follows: (eg for size 5, 5)
// *   *
//  * *
//   *
//  * *
// *   *

#include <stdio.h>
#include <stdlib.h>

void determinePixel (int col, int row, int width, int height);

int main(void) {

  int width, height;
  printf("Enter a width: ");
  scanf("%d", &width);

  printf("Enter a height: ");
  scanf("%d", &height);

  // iterate through rows and columns
  int rows = 0;
  while (rows < height) {
    int columns = 0;
    while (columns < width) {
      determinePixel(columns, rows, width, height);
      columns = columns + 1;
    }
    printf("\n");
    rows = rows + 1;
  }

  return EXIT_SUCCESS;
}

// determines the pixel to print at the x, y, position specified.
void determinePixel (int col, int row, int width, int height) {
  // this is for the left-right diagonal
  if (row == col) {
    printf("*");
  // this is for the right-leff diagonal
  } else if (col == (width - row - 1)) {
    printf("*");
  } else {
    printf(" ");
  }
}
