# include <stdio.h>
# include "CLinkedList.h"

int main() {
	List list;
	int data;
	int i;
	int nodeNum;
	ListInit(&list);

	LInsertFront(&list, 3);
	LInsertFront(&list, 8);
	LInsertFront(&list, 5);
	LInsertEnd(&list, 2);
	LInsertEnd(&list, 9);

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		for (i = 0; i < LCount(&list) * 3 - 1; i++) {
			if (LNext(&list, &data)) {
				printf("%d ", data);
			}
		}
	}
	printf("\n");

	nodeNum = LCount(&list);

	if (nodeNum != 0) {
		LFirst(&list, &data);
		if (data % 2 == 0) {
			LRemove(&list);
		}

		for (i = 0; i < nodeNum - 1; i++) {
			LNext(&list, &data);
			if (data % 2 == 0) {
				LRemove(&list);
			}
		}
	}

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		for (i = 0; i < LCount(&list) - 1; i++) {
			if (LNext(&list, &data)) {
				printf("%d ", data);
			}
		}
	}
	return 0;
}

/*

[실행 결과]

5 8 3 2 9 5 8 3 2 9 5 8 3 2 9
5 3 9

[결과 분석]



*/