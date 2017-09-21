#include "roaster.h"
#include "../suppliers/beans.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define NAME_LENGTH 20
#define ALL_PRESS_MARGIN 1.0

typedef struct _roaster {
  char *name;
  Beans bean;
  float cost;
} roaster;

char * getRoasterName(Roaster r) {
  return r->name;
}

Roaster RoastedBeans(void) {
  Beans b = harvest();
  printf("Getting some beans and roasting them the All Press way\n");
  Roaster r = malloc(sizeof(roaster));
  r->name = malloc(NAME_LENGTH);
  r->bean = b;
  strcpy(r->name, "All Press");
  r->cost = getBeanCost(b) + ALL_PRESS_MARGIN;
  return r;
}

float getRoastCost(Roaster r) {
  return r->cost;
}

void grindBeans(Roaster r) {
  free(r->name);
  consumeBeans(r->bean);
  free(r);
}
