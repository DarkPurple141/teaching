

calloc(number of elements, the type of the element);
malloc(number of bytes);

int n = 10;

// initialise and allocate the number of n * sizeof(int) bytes to 0 and returns
// a pointer to those bytes
int *array;

array = calloc(n, sizeof(int));

// initialise and allocate
array = malloc(n * sizeof(int));

int *mySpecialNumber = malloc(sizeof(int));

#define SIZE 50

array[SIZE];

array = malloc(n * sizeof(int));

free(array);

array[0] = 10;
