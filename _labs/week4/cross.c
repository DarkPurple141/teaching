// Alexander Hinds, z3420752
// Tutorial 4, Looping

#include <stdio.h>
#include <stdlib.h>

void determinePixel(int column, int row);

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
void determinePixel (int column, int row, int width, int height) {
  if (rows == 0 || rows == height-1) {
    printf("*");
  } else if (columns == 0 || columns == width -1) {
    printf("*");
  } else {
    printf(" ");
  }
}
