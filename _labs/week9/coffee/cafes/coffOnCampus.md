---
layout: code
---
```c
#include "coffee.h"
#include "../roasters/roaster.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _coffee {
  int sugars;
  order type;
  char * madeBy;
  float price;
  Roaster roaster;
} coffee;

Coffee newCoffee(order order, int sugars) {
  Roaster r = RoastedBeans();
  printf("Making a coffee...\n\n");
  Coffee new    = malloc(sizeof(coffee));
  new->sugars   = sugars;
  new->type     = order;
  new->madeBy   = "Coffee on Campus";
  new->price    = getRoastCost(r) + RETAIL_MARKUP;
  new->roaster  = r;
  return new;
}

float getPrice (Coffee c) {
  return c->price;
}

void drinkCoffee (Coffee c) {
  grindBeans(c->roaster);
  free(c);
}

void getInfo(Coffee order) {
  printf("Proudly using %s\n", getRoasterName(order->roaster));
  printf("Made by %s\n", order->madeBy);
}
```
