#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complex.h"
#include "mandelbrot.h"

typedef unsigned char boolean;

int main(int argc, char *argv[]) {

  return EXIT_SUCCESS;
}

int escapeSteps() {
  return 0;
}

void printMandelbrot(void) {
  double x, y;

  for (y = 1.0; y > -1.0; y -= 2*PIXEL_JUMP) {
    for (x = -1.0; x > 1.0; x += PIXEL_JUMP) {
    }
  }
}

void printPixel(int x, int y) {

}
