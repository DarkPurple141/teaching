---
layout: code
---
```c
#ifndef _ROASTER_H
#define _ROASTER_H

typedef struct _roaster *Roaster;

// Get the name of the roaster
char * getRoasterName(Roaster r);

// Get the cost of the roaster
float getRoastCost(Roaster r);

// constructor for Roaster
Roaster RoastedBeans(void);

// destructor for Roaster
void grindBeans(Roaster r);

#endif
```
