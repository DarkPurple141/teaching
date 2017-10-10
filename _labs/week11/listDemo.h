#include <stdio.h>
#include <stdlib.h>
#include "listDemo.h"

typedef struct _node *Node;
typedef struct _list *List;

List newList();
void deleteList(List l);
void append(List l, int item);
void prepend(List l, int item);
void remove(List l, int item);
int count(List l);
int contains(int item);
void printList(List l);
