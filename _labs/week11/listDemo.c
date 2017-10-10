#include <stdio.h>
#include <stdlib.h>
#include "listDemo.h"

typedef struct _node *Node;
typedef struct _list *List;

typedef struct _list {
    Node head;
} list;

typedef struct _node {
    int value;
    Node next;
} node;

List newList() {

   List L = malloc(sizeof(list));
   L->head = NULL;

   return L;
}

static Node newNode(int item) {

   Node N = malloc(sizeof(node));
   N->value = item;
   N->next = NULL;

   return N;
}

static void deleteNode(Node n) {
   n->next = NULL;
   free(n);
}

static void deleteListHelper(Node n) {
   if (n) {
      deleteListHelper(n->next);
      free(n);
   }
}

void deleteList(List l) {
   deleteListHelper(l->head);
   free(l);
}

void append(List l, int item);
void prepend(List l, int item);
void remove(List l, int item);
int count(List l);
int contains(int item);
void printList(List l);
