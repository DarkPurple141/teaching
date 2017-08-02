```c
// Alex Hinds
// A cool program to read a number and tell u the day of the week
// Number will correspond to code in following form
// Sunday -> 0, Monday -> 1 etc for 0<=day<=6;
// 2 August, 2017

#include <stdio.h>
#include <stdlib.h>

#define MONDAY 1
#define TUESDAY 2

int main(int argc, char *argv[]) {

    int day;
    printf("Hey there! This is a weekday encoder.\n");
    printf("Please type in a number between 0 and 6 to get the corresponding day!\n");
    scanf("%d", &day);

    if (day < 0 || day > 6) {
        printf("What are you doing, you're such a noob!\n");
        return EXIT_FAILURE;
    } else if (day == 0 || day == 6) {
        printf("Have a good weekend!\n");
        if (day == 0) {
            printf("Your day is Sunday!!!!!\n");
        } else {
            printf("Your day is Saturday!!!!!\n");
        }
    } else {
        if (day == MONDAY) {
            printf("Your day is Monday!\n");
        } else if (day == 2) {
            printf("Your day is Tuesday!\n");
        } else if (day == 3) {
            printf("Your day is Wednesday!\n");
        } else if (day == 4) {
            printf("Your day is Thursday!\n");
        } else {
            printf("Your day is Friday!\n");
        }
    }

    return EXIT_SUCCESS;
}
```
[Back](/)