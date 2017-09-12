#include <stdio.h>
#include "Complex.h"

int main(int argc, char *argv[]) {

  //Complex c  = { 1.0, 2.0 }

  Complex c = newComplex(1.0, 2.0);
  //printf("Trying to access c->re = %lf\n", );
  showComplex(c);

  return 0;
}
