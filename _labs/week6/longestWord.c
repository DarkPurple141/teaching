// Calculate the magnitude of a complex number

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 255

int len(char c, char *buffer, int index) {
  if (c != EOF && c != '\n' && c != ' ' && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
    buffer[index] = c;
    return 1 + len(getchar(), buffer, index+1);
  } else {
    buffer[index] = '\0';
    return 0;
  }
}

void copy(char * str1, char* str2) {
  int index = 0;
  while (str1[index] != '\0') {
    str2[index] = str1[index];
    index++;
  }
  str2[index] = '\0';
}

int main(int argc, char *argv[]) {
  char c;
  int max = 0;
  int temp = 0;
  char buffer[SIZE];
  char longest[SIZE];
  while ((c = getchar())!= EOF) {

    // adapt as appropriate
    temp = len(c, buffer, 0);
    printf("%s %d\n", buffer, temp);
    if (temp > max) {
      max = temp;
      copy(buffer, longest);
    }
  }

  printf("Longest word = %s (%d)\n", longest, max);

  return EXIT_SUCCESS;
}
