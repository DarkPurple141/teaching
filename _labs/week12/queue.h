// simple queue using int

typedef struct _queue * Queue;

Queue newQueue();
void destroyQueue(Queue q);
int pop(Queue q);
void add(Queue q, int item);
int size(Queue q);
void showQueue(Queue q);
