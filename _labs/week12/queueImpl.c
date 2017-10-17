#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
   int data;
   Node next;
   Node prev;
} node;

typedef struct _queue {
   int size;
   Node head;
   Node tail;
} queue;

static Queue genQueue(int size) {
   Queue new = newQueue();

   while (size) {
      add(new, rand()%10);
      size--;
   }
   return new;
}

Queue newQueue() {
   Queue new = calloc(1, sizeof(queue));
   new->size = 0;
   new->head = NULL;
   new->tail = NULL;
   return new;
}

void destroyQueue(Queue q) {
   while (q->tail) {
      pop(q);
   }
   free(q);
}

void showQueue(Queue q);
int pop(Queue q) {
   return 0;
}
void add(Queue q, int item);
int size(Queue q);

int main(int argc, char *argv[]) {
   Queue q = genQueue(10);
   showQueue(q);

   return EXIT_SUCCESS;
}
