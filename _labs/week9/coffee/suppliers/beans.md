---
layout: code
---
```c
typedef struct _beans *Beans;

// constructor for Beans
Beans harvest();

// Get the name of the producer
char * getBeans(Beans b);

// Get the cost of the beans
float getBeanCost(Beans b);

// destructor for Beans
void consumeBeans(Beans b);
```
