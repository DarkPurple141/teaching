// COMP1511 17s2 -- Complex ADT
// Created by: ... (z0000000)
//             ... (z0000000)
// Created on: 2017-09-??
// Tutorial:   dayHH-lab

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Complex.h"

typedef struct _complex {
    double re;
    double im;
} complex;

// Create a new `Complex` number from two `double`s.
Complex newComplex (double re, double im) {
    // Add your code here.

    return NULL;
}

// Release all resources associated with a `Complex` number.
void destroyComplex (Complex c) {
    if (c) free(c);
}

// Retrieve the real part of the `Complex` number.
double complexRe (Complex c) {
    // Add your code here.
    return 0;
}

// Retrieve the imaginary part of the `Complex` number.
double complexIm (Complex c) {
    // Add your code here.
    return 0;
}

// Add two `Complex` numbers together.
Complex complexAdd (Complex w, Complex z) {
    // Add your code here.
    return NULL;
}

// Multiply two `Complex` numbers together.
Complex complexMultiply (Complex w, Complex z) {
    // Add your code here.
    return NULL;
}

// Take the magnitude (or modulus, or absolute) of a `Complex` number.
double complexMod (Complex w) {
    // Add your code here.
    return 0;
}

// Take the argument (or angle) of a `Complex` number.
double complexArg (Complex w) {
    // Add your code here.
    return 0;
}

void showComplex(Complex c) {
  printf("%lf %lfi\n",c->re, c->im);
}
