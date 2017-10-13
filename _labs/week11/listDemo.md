---
layout: code
---
```c
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

void appendRecursive(Node n, int item) {
   if (n->next) {
      appendRecursive(n, item);
   } else {
      n->next = newNode(item);
   }
}

void append(List l, int item) {
   // if the list is empty
   if (l->head == NULL) {
      l->head = newNode(item);
   } else {
      Node curr = l->head;
      while (curr->next != NULL) {
         curr = curr->next;
      }
      curr->next = newNode(item);
   }
}

void prepend(List l, int item) {
   Node new = newNode(item);
   new->next = l->head;
   l->head = new;
}

void remove(List l, int item) {

   // 1
   if (l->head == NULL) {
      // do nothing.
   } else if (l->head) {
      Node curr = l->head;
      Node prev = curr;
      // 1 item case
      if (l->head->next == NULL) {

      // all other items case
      } else {
         int flag = 1;
         while (curr->next && flag) {

            if (curr->data == item) {
               // if this is the first item
               if (curr == prev) {
                  l->head = curr->next;
               } else {
                  prev->next = curr->next;
               }
               deleteNode(curr);
               flag = 0;
            }

            if (flag == 1) {
               prev = curr;
               curr = curr->next;
            }
         }

      }
   }
}

int countHelper(Node n) {
   if (n != NULL) {
      return 1 + countHelper(n->next);
   } else {
      return 0;
   }
}

int count(List l) {
   if (l->head != NULL) {
      // 1 + counter( 1 + counter (1 + counter))....>
      return countHelper(l->head);
   } else {
      return 0;
   }
}

int count(List l) {
   Node curr = l->head;
   int counter = 0;
   while (curr != NULL) {
      curr = curr->next;
      counter++;
   }
   return counter;
}

int contains(List l, int item) {
   Node curr = l->head;

   while (curr) {
      if (curr->data == item) {
         return TRUE;
      }
      curr = curr->next;
   }
   return FALSE;
}

void deleteTail(List l) {
   l->head = deleteEnd(l->head);
}

Node deleteEnd(Node n) {
   if (n == NULL) {
      return NULL;
   } else if (n->next == NULL) {
      free(n);
      return NULL;
   } else {
      n->next = deleteEnd(n->next);
      return n;
   }
}

void insertNth(List l, int n, int item) {

   Node curr = l->head;
   int counter = 1;

   if (curr == NULL) {
      l->head = newNode(item);
   } else {
      if (n == 0) {
         Node new = newNode(item);
         new->next = l->head->next;
         l->head = new;
      } else {
         while (counter < n) {
            curr = curr->next;
            counter++;
         }
         Node new = newNode(item);
         new->next = curr->next;
         curr->next = new;
      }
  }
}


void insertNth(List l, int n, int item) {
   l->head = insertNthHelper(l->head, n, 0, item);
}


Node insertNthHelper(Node n, int n, int curr, int item) {
   if (n == curr) {
      Node new = newNode(item);
      new->next = n->next;
      n->next = new;
      return new;
   } else {
      n->next = insertNthHelper(n->next, n, curr+1, item);
      return n;
   }
}

void printList(List l) {
   Node curr = l->head;
   while (curr) {
      printf("[%d]->",curr->data);
      curr = curr->next;
   }
   printf("[X]\n");
}
```
