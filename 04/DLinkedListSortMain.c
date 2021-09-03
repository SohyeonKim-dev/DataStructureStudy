# include <stdio.h>
# include "DLinkedList.h"

int sortascending(int d1, int d2) {
	if (d1 < d2) {
		return 0;
	}
	else
		return 1;
}

int sortdescending(int d1, int d2) {
	if (d1 > d2) {
		return 0;
	}
	else
		return 1;
}

int main() {
	List list;
	int data;
	ListInit(&list);

	SetSortRule(&list, sortascending);

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

- 정렬 기준을 오름차순 (sortascending)으로 하였을 때

number of data is 5
11 22 33 44 55

number of data is 4
11 33 44 55

*/