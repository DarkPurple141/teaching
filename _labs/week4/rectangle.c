// Alexander Hinds, z3420752
// Makes a rectangle with some stars.

#include <stdio.h>
#include <stdlib.h>

int readDimension(char * dimension);
void printPixel(int width, int height, int row, int col);

// Let's make some rectangles.
int main(int argc, char *argv[]) {

  int width, height;

  // read in width and height
  width = readDimension("width");
  height = readDimension("height");

  int row = 0;
  // think about our rows and columns as iterators
  while (row < height) {
    int column = 0;
    while (column < width) {
      printPixel(width, height, row, column);
      column = column + 1;
    }
    printf("\n");
    row = row + 1;
  }

  return EXIT_SUCCESS;
}

// This function will print a * if the * lies on the 'edge'
void printPixel(int width, int height, int row, int col) {
  if (row == 0 || row == height - 1) {
    printf("*");
  } else if (col == 0 || col == width - 1) {
    printf("*");
  } else {
    printf(" ");
  }
}

// reads in a value using scanf
int readDimension(char * dimension) {
  int x;
  printf("Please enter a %s: ", dimension);
  scanf("%d",&x);
  return x;
}
