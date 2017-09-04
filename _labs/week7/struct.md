---
layout: code
---
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_DAYS 7
#define MAX_BIRTHDAYS 100

typedef struct _weekday *Weekday;

typedef struct _myStruct {
  // some data
} myStruct;

typedef struct _weekday {
  char * name;
  int code;
  char * birthdays[100];
} weekday;

weekday makeWeekday(void);
void printWeekday(Weekday day);

// also whats a typedef -- it allows us to make an alias
typedef unsigned char uchar;
typedef unsigned char color;

int main(int argc, char *argv[]) {
  weekday Tuesday_16th_March = {
    .name = "Tuesday",
    .code = 16,
    .birthdays = {"Jeff", "Michael", "Roy"}
  };
  // can be put into an array
  weekday days[NUM_DAYS];

  weekday new = makeWeekday();
  weekday temp;
  temp = new; // this will faitfully copy over the contents

  Weekday pointer = &temp;
  printWeekday(pointer);

  return EXIT_SUCCESS;
}

void printBirthdays(char* array[]) {
  // printBirthdays
  for (int i=0; i < MAX_BIRTHDAYS; i++) {
    printf("%s ", array[i]);
  }
  printf("\n");
}

void printWeekday(Weekday day) {
  // prints the weekday
  printf("name: %s\n",day->name);
  printf("code: %d\n",day->code);
  printBirthdays(day->birthdays);
}

// can have functions with them too.
weekday makeWeekday(void) {
  // alternate way to declare
  weekday new = {"Thursday", 18, {}};
  return new;
}
```
