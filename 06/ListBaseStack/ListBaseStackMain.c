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

[���� ���]

5

5 4 3 2 1

Stack Memory Error!

- ���� ������ �迭 ��� ���ð� ������!

[�ڵ� �м�]

�迭 ����� ���� �������� ����� �ε��� ���,
����Ʈ ����� ���� ����������, ���� ����Ʈ�� �����͸� Ȱ���Ѵ�.

- ��忡 ���ο� ��带 �߰��Ͽ�
- LIFO ( Last In First Out ), ���������� ���� �ڷᱸ���� �����Ѵ�.

- ��� �޼���
	: NULL ������ 'newNode'�� �������ϰ� �ִٴ� ���� � �ǹ�����? 

*/