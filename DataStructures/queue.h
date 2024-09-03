#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.h"

struct Queue {
    struct LinkedListInt list;
};

void push(int data, struct Queue *q);
int pop(struct Queue *q);
struct Queue *newQueue(struct LinkedListInt list);

#endif /* QUEUE_H */

