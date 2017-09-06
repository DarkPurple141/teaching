#include <stdio.h>
#include <stdlib.h>


typedef struct _point {
  int x;
  int y;
  int *array;
} point;

int * buildArray(void);

int main(int argc, char *argv[]) {
  /* code */
  int * a = buildArray();
  int * mySpecialNumber = malloc(sizeof(int));
  malloc(sizeof(point));
  //int array[10];
  //malloc()
  //calloc(10,sizeof(int));
  // buildArray(n);
  return EXIT_SUCCESS;
}

int * buildArray(void) {
    return malloc(10*sizeof(int));
}
