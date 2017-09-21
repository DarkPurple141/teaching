#include "cafes/coffee.h"
#include <stdio.h>

order intToOrder(int num) {
  order retVal;
  switch (num) {
    case 0:
      retVal = FLAT_WHITE; break;
    case 1:
      retVal = LATTE; break;
    case 2:
      retVal = CAPP; break;
    case 3:
      retVal = ESPRESSO; break;
    default:
      retVal = BLACK;
  }
  return retVal;
}

// helper function
char * orderToStr(order o) {
  char * string;
  switch (o) {
    case FLAT_WHITE:
      string = "Flat White"; break;
    case LATTE:
      string = "Latte"; break;
    case CAPP:
      string = "Cappucino"; break;
    case ESPRESSO:
      string = "Espresso"; break;
    default:
      string = "Long Black";
  }
  return string;
}

// getOrder
void getOrder(int *coffee, int *sugar) {
  printf("What order fam?\n");
  printf("FLAT_WHITE : 0\n"
         "LATTE      : 1\n"
         "CAPPUCINO  : 2\n"
         "ESPRESSO   : 3\n");

  scanf("%d", coffee);
  printf("Sugars? ");
  scanf("%d", sugar);
}

int main(int argc, char const *argv[]) {

  int coffee, sugar;
  getOrder(&coffee, &sugar);
  printf("One %s coming up!\n\n", orderToStr(coffee));
  Coffee order = newCoffee(intToOrder(coffee), sugar);
  printf("That'll be %f, thanks.\n", getPrice(order));
  drinkCoffee(order);

  return 0;
}
