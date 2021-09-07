#include <stdio.h>
#include "DummyDoubleLinkedList.h"

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

		printf("\n\n");
	}

	if (LFirst(&list, &data)) {
		if (data % 2 == 0) {
			LRemove(&list);
		}

		while (LNext(&list, &data)) {
			if (data % 2 == 0) {
				LRemove(&list);
			}
		}

		if (LFirst(&list, &data)) {
			printf("%d ", data);

			while (LNext(&list, &data)) {
				printf("%d ", data);
			}

			printf("\n\n");
		}

	}
	return 0;
}



/*
[실행 결과]

1 2 3 4 5 6 7 8

1 3 5 7

[코드 분석]
	
- 코드 재사용 시, 주의하자.. ^_^

*/