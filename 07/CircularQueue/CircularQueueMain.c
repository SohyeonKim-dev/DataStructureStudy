#include <stdio.h>
#include "CircularQueue.h"

int main() {
	Queue q;
	QueueInit(&q);

	Enqueue(&q, 1);
	Enqueue(&q, 2);
	Enqueue(&q, 3);
	Enqueue(&q, 4);
	Enqueue(&q, 5);

	while (!QIsEmpty(&q)) {
		printf("%d ", Dequeue(&q));
	}
	return 0;
}


/*

[실행 결과]

1 2 3 4 5


[결과 분석]

-

-

-

*/
