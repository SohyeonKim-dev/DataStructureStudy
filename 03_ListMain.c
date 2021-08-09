# include <stdio.h>
#include "03_ArrayList.h"

int main() {
	//ArrayList�� ���� �� �ʱ�ȭ
	List list;
	int data;
	ListInit(&list);

	//5���� ������ ����
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 33);
	LInsert(&list, 22);

	//����� ������ ��ü ���
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	//���� 2�� Ž���Ͽ�, ���� ����
	if (LFirst(&list, &data)) {
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data)) {
			if (data == 22) 
				LRemove(&list);
		}
	}

	//���� �� ���� ������ ��ü ���
	printf("���� �������� ��: %d \n", LCount(&list));

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

[���� ���]
���� �������� ��: 5
11 11 22 33 22

���� �������� ��: 3
11 11 33

[�ڵ� �м�]
1. ��� ���Ͽ� ��Ÿ�� ����ü ���� �������ٿ� ';' �ϳ� �� �����ٰ� ���� 102�� �߻��ߴ�. ��������.. 

2. ���� �ڵ� �м� start  


*/