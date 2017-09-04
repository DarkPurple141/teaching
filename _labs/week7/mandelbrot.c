#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complex.h"
#include "mandelbrot.h"

typedef unsigned char boolean;

int main(int argc, char *argv[]) {

  double x, y;

  printf("Enter X, Y for mandelbrot: ");
  scanf("%lf %lf", &x, &y);
  printf("mandelbrot for x:%lf y:%lf\n",x, y);
  printMandelbrot(x, y);

  return EXIT_SUCCESS;
}

int escapeSteps(double x, double y) {
  complex w = {0.0, 0.0};
  complex z = {x, y};
  int steps = 0;
  while (complexMag(w) < MANDELBROT_LIM && steps < MAX_STEPS) {
    w = complexMult(w, w);
    w = complexAdd(w, z);
    steps++;
  }
  return steps;
}

// takes the top left point.
void printMandelbrot(double left, double top) {
  double x, y;

  for (y = top; y > (top - PIXEL_JUMP*100); y -= 2*PIXEL_JUMP) {
    for (x = left; x < (left + PIXEL_JUMP*100); x += PIXEL_JUMP) {
      printPixel(x, y);
    }
    printf("\n");
  }
}

void printPixel(double x, double y) {
  if (escapeSteps(x, y) < MAX_STEPS) {
    // this is inside the mandelbrot
    printf(" ");
  } else {
    // no love gov
    printf("*");
  }
}
