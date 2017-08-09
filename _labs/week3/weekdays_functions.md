---
layout: code
---
```c
// Alex Hinds
// A cool program to read a number and tell u the day of the week
// Number will correspond to code in following form
// Sunday -> 0, Monday -> 1 etc for 0 <= day <= 6;
// 2 August, 2017, Updated 9 August, 2017

#include <stdio.h>
#include <stdlib.h>

// fancy features
#define LANGUAGE_ERROR -2
#define DAY_ERROR -1
#define FRENCH 1
#define ENGLISH 0

// our functions

// this one reads in the day, and is passed a language.
int readDay(int language);

// if the day is a weekend, determine which day to say based on language.
void isWeekend(int day, int language);

// if the day is a normal day of the week, print the day based on language.
void isNormalWeekday(int day, int language);

// determines the language
int selectLanguage(void);

// Says weekend in French
void frenchWeekend(int day);

// Says weekend in English
void englishWeekend(int day);

int main(int argc, char *argv[]) {
    // read in the day;
    //int language = selectLanguage();
    int language = 0;
    int day = readDay(0);
    if (day == DAY_ERROR || day == LANGUAGE_ERROR) {
      return EXIT_FAILURE;
    }
    if (day == 0 || day == 6) {
        isWeekend(day, language);
    } else {
        isNormalWeekday(day, language);
    }
    return EXIT_SUCCESS;
}

void isWeekend(int day, int language) {
  if (language == FRENCH) {
    frenchWeekend(day);
  } else {
    englishWeekend(day);
  }
}

void frenchWeekend(int day) {
  if (day == 0) {
      printf("Votre jour est Dimanche!!!!!\n");
  } else {
      printf("Votre jour est Samedi!!!!!\n");
  }
}

void englishWeekend(int day) {
  if (day == 0) {
      printf("Your day is Sunday!!!!!\n");
  } else {
      printf("Your day is Saturday!!!!!\n");
  }
  printf("Have a good weekend!\n");
}

void isNormalWeekday(int day, int language) {
  if (day == 1) {
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

int selectLanguage(void) {
  int language;
  printf("Hey there! This is a weekday encoder.\n");
  printf("Bonjour! C'est un jour encoderrrr.\n");
  printf("Please select a language // S'il vous plait selecter un langue (0, 1): ");
  scanf("%d", &language);
  return language;
}

int readDay(int language) {
  int day;
  if (language == FRENCH) {
      printf("French for enter a day between 0 and 6\n");
      scanf("%d", &day);
      if (day < 0 || day > 6) {
        printf("French for being noob!\n");
        return DAY_ERROR; // -1
      }
  } else if (language == ENGLISH) { // ENGLISH = 0
      printf("Please type in a number between 0 and 6 to get the corresponding day!\n");
      scanf("%d", &day);
    if (day < 0 || day > 6) {
        printf("What are you doing, you're such a noob!\n");
        return DAY_ERROR; // -1
    }
  } else {
      return LANGUAGE_ERROR; // -2
  }

  return day;
}
```
