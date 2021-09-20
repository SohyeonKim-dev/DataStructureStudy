#include <stdio.h>
#include "UsefulHeap.h"

int DataPriorityComp(char ch1, char ch2) {
	//return ch2 - ch1;
	return ch1-ch2;
}

int main() {
	Heap heap;
	HeapInit(&heap, DataPriorityComp);

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');
	printf("%c \n", HDelete(&heap));

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');
	printf("%c \n", HDelete(&heap));

	while (!HIsEmpty(&heap)) {
		printf("%c \n", HDelete(&heap));
	}
	return 0;
}

/*

[Output1]

A
A
B
B
C
C


[Output2]

C
C
B
B
A
A


*/