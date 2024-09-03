#include "queue.h"

struct Queue *newQueue(struct LinkedListInt list) {

    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue -> list = list;
    return queue;
}

void push(int data, struct Queue *q){

	insertNodeIntAtN(q->list.length, data, &(q -> list));
}

int pop(struct Queue *q){

	int data = retrieveDataNodeInt(0, &(q -> list));
	removeNodeIntAtN(0, &(q -> list));
	return data;
}


