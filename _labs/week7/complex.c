#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "complex.h"

// (a + ib) * (c + id)
// a*c + i(b*c + a*d) - b*d
complex complexMult(complex a, complex b) {
  complex result =
         {
           a.real*b.real - a.imaginary*b.imaginary,
           a.imaginary*b.real + b.imaginary*a.real
         };
  return result;
}

// (a + c) + i(d + b)
complex complexAdd(complex a, complex b) {
  complex result =
        {
          a.real + b.real,
          a.imaginary + b.imaginary
        };
  return result;
}

// | w | = sqrt(a^2 + b^2)
double complexMag(complex a) {
  return sqrt(a.real*a.real + a.imaginary*a.imaginary);
}
