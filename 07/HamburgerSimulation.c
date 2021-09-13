#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define CUS_COME_TERM	15

#define CHE_BURGER		0
#define BUL_BURGER		1
#define DUB_BURGER		2

#define CHE_TERM		12
#define BUL_TERM		15
#define DUB_TERM		24

int main() {
	int makeProcess = 0;
	int cheOrder = 0;
	int bulOrder = 0;
	int dubOrder = 0;
	int sec;

	Queue que;

	QueueInit(&que);
	srand(time(NULL));

	for (sec = 0; sec < 3600;sec++) 
	{
		if (sec % CUS_COME_TERM == 0) 
		{
			switch (rand() % 3)
			{
			case CHE_BURGER:
				Enqueue(&que, CHE_TERM);
				cheOrder += 1;
				break;

			case BUL_BURGER:
				Enqueue(&que, BUL_TERM);
				bulOrder += 1;
				break;

			case DUB_BURGER:
				Enqueue(&que, DUB_TERM);
				dubOrder += 1;
				break;
			}
		}

		if (makeProcess == 0 && !QIsEmpty(&que)) {
			makeProcess = Dequeue(&que);
		}

		makeProcess--;
	}
	printf("Simulation Report! \n", QUE_LEN);
	printf(" - Cheese burger: %d \n", cheOrder);
	printf(" - Bulgogi burger: %d \n", bulOrder);
	printf(" - Double burger: %d \n", dubOrder);
	printf(" - Waiting room size: %d \n", QUE_LEN);
	return 0;

}

/*

[Output1]

Queue Memory Error!



[Output2]

Queue Memory Error!



[Output3]

Simulation Report!
 - Cheese burger: 79
 - Bulgogi burger: 78
 - Double burger: 83
 - Waiting room size: 100


*/

