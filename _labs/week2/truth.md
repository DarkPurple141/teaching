---
layout: code
---
```c
// demo program for cases and if statements
// program by Alex Hinds.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int day;
    int y = 0;
    printf("Enter a number: ");
    scanf("%d", &day);
    printf("We scanned %d\n", day);

    if (!(day > 6 || day < 0)) {
        printf("Oops, that number doesn't map to a day!\n");
    } else {
        if (day == 0) {
            if (y == 1) {
                printf("Special Sunday\n", );
            } else {
                printf("Sunday\n");
            }
        } else if (day == 1) {
            printf("Monday\n");
        } else if (day == 2) {
            printf("Tuesday\n");
        } else if (day == 3) {
            printf("Wednesday\n");
        }
        // so on so forth
    }

    return EXIT_SUCCESS;
}
```
