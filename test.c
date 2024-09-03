#include <stdio.h>
#include "DataStructures/linkedList.h"
#include "DataStructures/queue.h"

int main(){

	struct LinkedListInt lli = newLinkedList();
	struct Queue *q = newQueue(lli);
	
	for (int i = 0; i < 10; i++){
		push(6, q);
		push(9, q);
	}

	for (int i = 0; i < 5; i++){
		printf("%d\n", pop(q));
	}

	retrieveDataNodeInt(100, &lli);
}
