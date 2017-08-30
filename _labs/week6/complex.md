---
layout: code
---
```c
// Calculate the magnitude of a complex number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// DO NOT CHANGE THIS STRUCT
typedef struct _complex {
    double real;
    double imaginary;
} complex;

double complexAbsolute(complex c);
complex complexAdd(complex c, complex c2);
void showComplex(complex c);

// DO NOT CHANGE THIS MAIN FUNCTION
int main (int argc, char *argv[]) {

    // getting the complex number
    complex c;

    printf("Enter the real part: ");
    scanf("%lf", &c.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);

    complex y = {2.7, 8.9};
    // you can also declare a struct like this
    /*
      complex y = {
        .real = 2.7,
        .imaginary = 8.9
      }
    */

    // get the absolute value
    double absoluteValue = complexAbsolute(c);

    c = complexAdd(c, y);
    showComplex(c);

    // print the value
    printf("The absolute value is %.2lf.\n", absoluteValue);

    return EXIT_SUCCESS;
}
// END OF MAIN FUNCTION

// adds two complex numbers together and returns the result
complex complexAdd(complex c, complex c2) {
    double real = c.real + c2.real;
    double imaginary = c.imaginary + c2.imaginary;
    complex result = {real, imaginary};

    return result;
}

// shows a complex number
void showComplex(complex c) {
    printf("%.2lf + %.2lfi\n", c.real, c.imaginary);
}

// this function returns the magnitude (absolute value)
// of a complex number
double complexAbsolute(complex c) {
    // nice and simple using math.h sqrt() function
    return sqrt(c.real*c.real + c.imaginary*c.imaginary);
}


```
