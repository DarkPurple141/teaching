#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 20

void printString(char *string);
void print(char *string);

int main(void) {
  // ascii is an early encoding for numbers into common characters
  // You can find the way it maps by typing "ascii" into your terminal

  // Strings
  //'\0' == 0 these are the same
  char string[STRING_SIZE] = {67, 97, 116, 0};
  string[1] = 98;
  printString(string);
  printf("%s\n",string); // cat
  int i = 0;
  while (i < 4) {
    printf("%d ", string[i]);
    i++;
  }
  printf("\n");
  char string1[STRING_SIZE] = {'C', 'a', 't', '\0'};
  string1[1] = 'b';
  printString(string1);
  char string2[STRING_SIZE] = "Cat";
  string2[1] = 'b';
  printString(string2);
  char *string3 = "Cat";
  //string3[1] = 'b';
  printString(string3);
  string3 = "jeff";
  printString(string3);

  print("jeff");

  return EXIT_SUCCESS;
}

void print(char * string) {
  printf("%s\n",string);
}

// prints a string
void printString(char *string) {
  int i = 0;
  while (i < STRING_SIZE && string[i] != '\0') {
    printf("%c", string[i]);
    i++;
  }
  printf("\n");
}
