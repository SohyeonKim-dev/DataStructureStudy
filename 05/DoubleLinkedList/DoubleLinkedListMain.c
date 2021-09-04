#include <stdio.h>
#include "DoubleLinkedList.h"

int main() {
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsert(&list, 6);
	LInsert(&list, 7);
	LInsert(&list, 8);

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data)) {
			printf("%d ", data);
		}

		while (LPrevious(&list, &data)) {
			printf("%d ", data);
		}

		printf("\n\n");
	}
	return 0;
}

/*
[실행 결과]

- 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8

[코드 분석]

- 우선은 더미 노드가 없는 이중 연결 리스트를 구현하였다. 
	(더미 노드의 이점: 노드를 일관적으로 구성할 수 있다.)
	더미 노드의 유무는 LInit 함수의 정의에서 확인할 수 있다. 
	LFirst 함수의 경우는, 더미의 유무와 무관하다. (정의가 변하지 않는다.)

- LInsert 함수의 정의를 통하여, 머리에 노드를 추가하는 함수라는 것을 알 수 있다. 
	

*/
