#include <stdio.h>
#include "String_Header.h"

// works the same way as strcpy in <string.h>
char *strcpy(char *dest, const char *src) {
  int i = 0;
  while (*src) {
    dest[i] = *src;
    src++;
    i++;
  }
  return dest;
}

// works the same way as strlen in <string.h>
size_t strlen(const char *str) {
  int count = 0;
  while (*str) {
    count++;
    str++;
  }
  return count;
}

// works the same way as strcmp in <string.h>
int strcmp(const char *str1, const char *str2) {
  while (*str1 && *str2) {
    if (*str1 != *str2) {
      return *str1 - *str2;
    }
    str1++;
    str2++;
  }
  return 0;
}

//char *strcat(char *dest, const char *src) {
//  while (*dest != )
//}
