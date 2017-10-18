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

  if (steps > MAX_STEPS) {
     return MAX_STEPS;
  } else if (complexMag(w) < MANDELBROT_LIM) {
      w = complexMult(w, w);
      w = complexAdd(w, z);
      return escapeSteps(x, y, steps+1, w);
  else if ()
  } else {
     return steps;
  }
}


int main() {

   countToTen(0);
   int array[6] = {0, 1, 2, 3, 4, 5};
   mapSquares(0, array, 6);
   printArray(0, array, 6);



   return 0;
}
