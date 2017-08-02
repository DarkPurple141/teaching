#include <stdio.h>

int main(void) {
    /* code */
    int x = 0;

    if (x > 1) {
        // we execute what's in here.
        printf("Looks like x is greater than 1!\n");
    } else if (x == 0) {
        printf("Looks like x = 0\n");
    } else if (x > 10 || x < -10) {
        // if x maginute greater than 10
    } else if (x > 5 && x > 10) {

    } else {
        printf("Looks like x is less than 1\n");
    }

    x = 2;
    if (x>1) {
        printf("Execute here\n");
    }

    if (x == 2) {
        printf("Also execute here\n");
    }

    return 0;

}
