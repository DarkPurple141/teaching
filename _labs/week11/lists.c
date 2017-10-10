#include <stdio.h>
#include <stdlib.h>

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

Node newNode(int item) {

   Node N = malloc(sizeof(node));
   N->value = item;
   N->next = NULL;

   return N;
}

void deleteNode(Node n) {
   n->next = NULL;
   free(n);
}

void append(List list, int item) {
   if (list == NULL) {
      // error case
      return;
   } else {
      if (list->head == NULL) {
         // empty head need to adjust
         list->head = newNode(item);
      } else {
         // otherwise normal case
         Node current = list->head;
         while (current->next != NULL) {
            current = current->next;
         }
         current->next = newNode(item);
      }
   }
}



void appendRecursive(Node n, int item) {
   if (n->next == NULL) {
      n->next = newNode(item);
   } else {
      appendRecursive(n->next, item);
   }
}

int countHelper(Node n) {
   if (n == NULL) {
      return 0;
   } else {
      // 1 + (1 + countHelper( 1 + countHelper ))..... == 5
      return 1 + countHelper(n->next);
   }
}

int countItems(List l) {
   if (l == NULL) {
      return 0;
   } else {
      return countHelper(l->head);
   }
}

Node removeRecursiveHelper(Node n, int item) {
   if (n == NULL) {
      return NULL;
   } else {
      return n->next = removeRecursiveHelper(n->next, item);
   }
}

void removeRecursive(List l, int item) {
   if (l == NULL) {
      return;
   } else {
      l->head = removeRecursiveHelper(l->head, item);
   }
}

void removeItem(List l, int item) {
   if (l != NULL) {
      Node current = l->head;
      Node previous = current;
      while (current->next != NULL) {
         if (previous == current) {
            printf("The item to delete is at head\n");
         } else {
            if (current->value == item) {
               previous->next = current->next;
               deleteNode(current);
            }
         }
         previous = current;
         current = current->next;
      }
   }
}

void printList(List list) {
   Node current = list->head;
   while (current != NULL) {
      printf("[%d]->", current->value);
      current = current->next;
   }
   printf("[X]\n");
}

int main(int argc, char *argv[]) {

   List l = newList();
   int i = 0;
   while (i < 5) {
      append(l, i);
      i++;
   }
   printList(l);
   printf("Items in list = %d\n", countItems(l));
   //removeItem(l, 2);
   //printList(l);

   return 0;
}
