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
[���� ���]

- 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8

[�ڵ� �м�]

- �켱�� ���� ��尡 ���� ���� ���� ����Ʈ�� �����Ͽ���. 
	(���� ����� ����: ��带 �ϰ������� ������ �� �ִ�.)
	���� ����� ������ LInit �Լ��� ���ǿ��� Ȯ���� �� �ִ�. 
	LFirst �Լ��� ����, ������ ������ �����ϴ�. (���ǰ� ������ �ʴ´�.)

- LInsert �Լ��� ���Ǹ� ���Ͽ�, �Ӹ��� ��带 �߰��ϴ� �Լ���� ���� �� �� �ִ�. 
	

*/