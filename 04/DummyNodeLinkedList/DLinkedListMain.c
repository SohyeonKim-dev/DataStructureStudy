# include <stdio.h>
# include "DLinkedList.h"

int main() {
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 33);
	LInsert(&list, 44);
	LInsert(&list, 55);

	printf("number of data is %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}
	printf("\n\n");

	if (LFirst(&list, &data)) {
		if (data == 22) {
			LRemove(&list);
		}
		while (LNext(&list, &data)) {
			if (data == 22)
				LRemove(&list);
		}
	}

	printf("number of data is %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}
	printf("\n\n");
	return 0;
}

/*
[실행 결과]

number of data is 5
55 44 33 22 11

number of data is 4
55 44 33 11

[코드 분석]
- 

*/