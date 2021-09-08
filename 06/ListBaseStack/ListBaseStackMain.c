#include <stdio.h>
#include "ListBaseStack.h"

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

- 실행 파일이 배열 기반 스택과 동일함!

[코드 분석]

배열 기반의 스택 구현에서 사용한 인덱스 대신,
리스트 기반의 스택 구현에서는, 연결 리스트의 포인터를 활용한다.

- 헤드에 새로운 노드를 추가하여
- LIFO ( Last In First Out ), 선입후출의 스택 자료구조를 구현한다.

- 경고 메세지
	: NULL 포인터 'newNode'를 역참조하고 있다는 것이 어떤 의미이지? 

*/