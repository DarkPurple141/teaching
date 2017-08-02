#include <stdio.h>

int main(int argc, char *argv[]) {

    int x = 2;
    int y = 10;

    if (x || y) {
        // will be evaluated.
        printf("This means x is not 0, or y is not 0\n");
    } else {
        printf("This means that x and y must be 0\n");
    }

    if (!x) {
        printf("This means x is 0\n");
    }

    if (x == 2) {
        printf("This means that x = 2\n");
    } else if (x >= 0) {
        printf("This means x is positive or 0\n");
    } else {
        printf("This means that x is negative.\n");
    }

    if (y < x) {
        printf("I guess y < x\n");

    } else {
        if (y > 5) {
            printf("y > 5, but greater than x\n");
        } else {
            printf("y < 5, but greater than x\n");
        }
    }




    return 0;
}
