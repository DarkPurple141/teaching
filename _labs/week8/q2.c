#include "questions.h"

// Write a C function that determines
// whether a string contains uppercase letters.
//
// Your function should return
// TRUE if the string contains uppercase letters,
// and FALSE if it does not.
//
// Your function should take one parameter: the string to check.
//
// Your function should return either TRUE or FALSE, depending on
// whether the string contains uppercase letters.
//
// For example, if the input string was: "Hello!",
// your function should return TRUE, as the string contained
// an uppercase letter: 'H'.

// Do not change these #defines, or your program will fail the autotests!

int containsUppercase (char *string) {
    // Write your solution here.
    while (*string != '\0') {
      if (*string >= 'A' && *string <= 'Z') {
        return TRUE;
      }
      string++;
    }
    return FALSE;
}
