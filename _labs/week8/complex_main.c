#include <stdio.h>
#include "Complex.h"

int main(int argc, char *argv[]) {

  Complex myComplex = newComplex(0, 0);
  //printf("myComplex = %lf %lf\n", myComplex->re, myComplex->im);
  showComplex(myComplex);

  return 0;
}
