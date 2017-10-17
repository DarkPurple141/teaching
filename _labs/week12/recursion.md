---
layout: code
---
```c
#include <stdio.h>

void countToTen(int number) {
   if (number > 10) {
      return;
   } else {
      printf("%d ", number);
      countToTen(number + 1);
   }
}

void mapSquares(int index, int array[], int size) {
   if (index >= size) {
      return;
   } else {
      array[index] = array[index] * array[index];
      mapSquares(index + 1, array, size);
   }
}

void printArray(int index, int array[], int size) {
   if (index >= size) {
      printf("\n");
   } else {
      printf("%d ", array[index]);
      printArray(index + 1, array, size);
   }
}

int escapeSteps(double x, double y, int steps, complex w) {
  // return the number of escape steps
  if (complexMag(w) < MANDELBROT_LIM && steps < MAX_STEPS) {
      w = complexMult(w, w);
      w = complexAdd(w, z);
      return escapeSteps(x, y, steps+1, w);
  } else {
     return steps;
  }
}


int main() {

   int array[5] = {0, 1, 2, 4, 5};
   mapSquares(0, array, 5);
   printArray(0, array, 5);

   countToTen(0);

   return 0;
}
```
