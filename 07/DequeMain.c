#include <stdio.h>
#include "Deque.h"

int main() {
	Deque deq;
	DequeInit(&deq);

	DQAddFirst(&deq, 3);
	DQAddFirst(&deq, 2);
	DQAddFirst(&deq, 1);

	DQAddLast(&deq, 4);
	DQAddLast(&deq, 5);
	DQAddLast(&deq, 6);

	while (!DQIsEmpty(&deq)) {
		printf("%d ", DQRemoveFirst(&deq));
	}

	printf("\n");

	DQAddFirst(&deq, 3);
	DQAddFirst(&deq, 2);
	DQAddFirst(&deq, 1);

	DQAddLast(&deq, 4);
	DQAddLast(&deq, 5);
	DQAddLast(&deq, 6);

	while (!DQIsEmpty(&deq)) {
		printf("%d ", DQRemoveLast(&deq));
	}

	return 0;
}

/*

[Output]

1 2 3 4 5 6
6 5 4 3 2 1

*/