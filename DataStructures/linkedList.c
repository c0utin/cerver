#include "linkedList.h"

struct NodeInt *newNodeInt(int data) {
    struct NodeInt *nniAddress = (struct NodeInt *)malloc(sizeof(struct NodeInt));
    if (nniAddress == NULL) {
        return NULL;
    }
    nniAddress->data = data;
    nniAddress->next = NULL;
    return nniAddress;
}

struct LinkedListInt newLinkedList() {
    struct LinkedListInt newLLI;
    newLLI.head = NULL;
    newLLI.length = 0;
    return newLLI;
}

void destroyNodeInt(struct NodeInt *Fnode) {
    free(Fnode);
}

struct NodeInt *iterateNodeInt(int index, struct LinkedListInt *lli) {
    if (index < 0 || index >= lli->length) {
        printf("Index out of bounds\n");
        exit(9);
    }

    struct NodeInt *fullCounter = lli->head;
    for (int i = 0; i < index; i++) {
        fullCounter = fullCounter->next;
    }

    return fullCounter;
}

void insertNodeIntAtN(int index, int data, struct LinkedListInt *lli) {
    struct NodeInt *nodeToInsertTmp = newNodeInt(data);

    if (index == 0) {
        nodeToInsertTmp->next = lli->head;
        lli->head = nodeToInsertTmp;
    } else {
        struct NodeInt *nodeFullCounter = iterateNodeInt(index - 1, lli);
        nodeToInsertTmp->next = nodeFullCounter->next;
        nodeFullCounter->next = nodeToInsertTmp;
    }

    lli->length += 1;
}

void removeNodeIntAtN(int index, struct LinkedListInt *lli) {
    if (index == 0) {
        struct NodeInt *nodeToRemoveTmp = lli->head;
        lli->head = nodeToRemoveTmp->next;
        destroyNodeInt(nodeToRemoveTmp);
    } else {
        struct NodeInt *nodeFullCounter = iterateNodeInt(index - 1, lli);
        struct NodeInt *nodeToRemoveTmp = nodeFullCounter->next;
        nodeFullCounter->next = nodeToRemoveTmp->next;
        destroyNodeInt(nodeToRemoveTmp);
    }

    lli->length -= 1;
}

int retrieveDataNodeInt(int index, struct LinkedListInt *lli) {
    struct NodeInt *node = iterateNodeInt(index, lli);
    if (node != NULL) {
        return node->data;
    } else {
        return -1;  
    }
}
