---
layout: code
---
```c
#ifndef _COFFEE_H
#define _COFFEE_H

#define RETAIL_MARKUP 1.1

// order enum
typedef enum _order {
  FLAT_WHITE,
  LATTE,
  CAPP,
  ESPRESSO,
  BLACK
} order;

typedef struct _coffee *Coffee;

// coffee construct
Coffee newCoffee(order order, int sugars);

// get info printed about a Coffee
void getInfo(Coffee order);

// get Price for a coffee
float getPrice(Coffee coffee);

// destructor for coffeee
void drinkCoffee(Coffee coffee);

#endif
```
