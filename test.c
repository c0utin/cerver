#include <stdio.h>
#include "DataStructures/linkedList.h"

int main(){

	struct LinkedListInt lli = newLinkedList();

	for (int i = 0; i < 10; i++){
		insertNodeIntAtN(0, 6, &lli);	
		insertNodeIntAtN(0, 9, &lli);
	}

	removeNodeIntAtN(1, &lli);
	insertNodeIntAtN(5, 222, &lli);

	for (int i = 0; i < lli.length; i++){
		printf("%d\n", retrieveDataNodeInt(i, &lli));
	}

	retrieveDataNodeInt(100, &lli);
}
