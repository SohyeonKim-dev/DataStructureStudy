#include <stdio.h>

int BSearch(int ar[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;


	while (first <= last) {
		mid = (first + last) / 2;

		if (target == ar[mid]) {
			return mid;
		}
		else {
			if (target < ar[mid]) {
				last = mid - 1;
			}
			else {
				first = mid + 1;
			}
		}
	}
	return -1;
}

int main() {
	int arr[] = { 1,2,3,5,7,8,11 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	if (idx == -1) {
		printf("Ž���� �����Ͽ����ϴ�. �ФѤ� \n");
	}
	else {
		printf("Ÿ���� ����� �ε�����: %d \n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("Ž���� �����Ͽ����ϴ�. �ФѤ� \n");
	}
	else {
		printf("Ÿ���� ����� �ε�����: %d \n", idx);
	}

	return 0;
}

/*

[���� ���]
Ÿ���� ����� �ε�����: 4
Ž���� �����Ͽ����ϴ�. �ФѤ�

[�ڵ� �м�]
1. ���� Ž�� �˰����� ���ĵ� �����Ϳ� �����ؾ� �Ѵ�. 
2. �ش� �˰����� �ð� ���⵵ �Լ� T(n) = log2(n)�̴�. // +1�� ����
3. while�� ������ ������ first <= last�ӿ� ��������. // first�� last�� ���� �����, 1���� �� ���� ������ ����.
4. mid +- 1 ����! (mid �����ϸ� ���� ������ �ɸ���. first���� last�� �۾��� �� ���� ������!)

*/ 