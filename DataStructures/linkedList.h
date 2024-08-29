#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>
#include "node.h"

struct LinkedListInt {
    struct NodeInt *head;
    int length;
};

void insertNodeIntAtN(int index, int data, struct LinkedListInt *lli);
void removeNodeIntAtN(int index, struct LinkedListInt *lli);
int retrieveDataNodeInt(int index, struct LinkedListInt *lli);
struct NodeInt *iterateNodeInt(int index, struct LinkedListInt *lli);
void destroyNodeInt(struct NodeInt *Fnode);
struct NodeInt *newNodeInt(int data);
struct LinkedListInt newLinkedList();

#endif

