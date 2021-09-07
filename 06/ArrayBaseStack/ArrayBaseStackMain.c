#include <stdio.h>
#include "ArrayBaseStack.h"

int main() {
	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1);
	SPush(&stack, 2);
	SPush(&stack, 3);
	SPush(&stack, 4);
	SPush(&stack, 5);

	printf("%d ", SPeek(&stack));
	printf("\n\n");

	while (!SIsEmpty(&stack)) {
		printf("%d ", SPop(&stack));
	}

	printf("\n\n");
	printf("%d ", SPeek(&stack));

	return 0;
}

/*

[실행 결과]

5

5 4 3 2 1

Stack Memory Error!


[결과 분석]



*/
