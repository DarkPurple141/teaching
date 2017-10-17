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

List newList();
void deleteList(List l);
Node newNode(int data);
void printList(List l);
void deleteListHelper(Node n);
void deleteList(List l);
void append(List l, int item);

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

void printList(List l) {
   Node curr = l->head;
   while (curr) {
      printf("[%d]->",curr->value);
      curr = curr->next;
   }
   printf("[X]\n");
}

void deleteNode(Node n) {
   n->next = NULL;
   free(n);
}

void deleteListHelper(Node n) {
   if (n) {
      deleteListHelper(n->next);
      free(n);
   }
}

void deleteList(List l) {
   deleteListHelper(l->head);
   free(l);
}

void genList(List l, int n) {
   int i = 0;
   while (i < n) {
      append(l, rand() % 10);
      i++;
   }
}

// 1 2 3 4
// 0 0 0 0
// 1 0 2 0 3 0 4 0
void zip(List a, List b) {
   Node curr = a->head;
   Node bCurr = b->head;

   while (curr != NULL) {
      // save the current->next
      Node toMoveTo = curr->next;
      Node nextInB = bCurr->next;

      // change both currNext
      curr->next = bCurr;
      bCurr->next = toMoveTo;

      // move to next in List for each node in each list.
      bCurr = nextInB;
      curr = toMoveTo;
   }
}

int main() {

   List a = newList();
   printf("This is List A\n");
   genList(a, 5);
   printList(a);

   List b = newList();
   printf("This is List B\n");
   genList(b, 5);
   printList(b);

   zip(a, b);

   // List c = prepend(a, b)

   // List c = insertInOrder(a, b);
   printf("After...\n");
   printList(a);


   deleteList(a);
   //deleteList(b);

   return 0;
}
