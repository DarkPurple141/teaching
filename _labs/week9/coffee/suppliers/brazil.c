#include "beans.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define BEAN_NAME_SIZE 20

typedef struct _beans {
  char * name;
  float cost;
} beans;

static float premiumBrazilLabour(void) {
  return 1.2;
}

Beans harvest() {
  printf("Harvesting some sweeet beanns from Brazzzill\n");
  Beans b = malloc(sizeof(struct _beans));
  b->name = malloc(BEAN_NAME_SIZE);
  b->cost = premiumBrazilLabour();
  strcpy(b->name, "Brazil Beans");
  return b;
}

float getBeanCost(Beans b) {
  return b->cost;
}

char * getBeans(Beans b) {
  return b->name;
}

void consumeBeans(Beans b) {
  free(b->name);
  free(b);
}
