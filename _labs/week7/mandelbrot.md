---
layout: code
---
```c
#include <stdio.h>
#include <stdlib.h>
#include "complex.h"
#include "mandelbrot.h"

int main(int argc, char *argv[]) {

  double x, y;
  printf("Enter X, Y for mandelbrot: ");
  scanf("%lf %lf", &x, &y);
  printf("mandelbrot for x:%lf y:%lf\n",x, y);
  printMandelbrot(x, y);

  return EXIT_SUCCESS;
}

int escapeSteps(double x, double y) {
  // return the number of escape steps
  int steps = 0;
  /*
    DIY
  */

  return steps;
}

// print out the Mandelbrot
void printMandelbrot(double left, double top) {
  double x, y;
  y = top;
  while (y > top - 2.0) {
    x = left;
    while (x < left + 3.0) {
      printPixel(x, y);
      x = x + PIXEL_JUMP;
    }
    printf("\n");
    y = y - 2*PIXEL_JUMP;
  }

}

// print out a pixel for an x, y coord
void printPixel(double x, double y) {
  if (escapeSteps(x, y) < MAX_STEPS) {
    printf(" ");
  } else {
    printf("*");
  }
}
```
