#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target) {
	int mid;
	if (first > last) {
		return -1;
	}
	mid = (first + last) / 2;
	
	if (ar[mid] == target) {
		return mid;
	}
	else {
		if (ar[mid] < target) {
			BSearchRecur(ar, mid + 1, last, target);
		}
		else {
			BSearchRecur(ar, first, mid-1, target);
		}
	}
}

int main() {
	int arr[] = { 1,2,3,4,5,7,9,10 };
	int idx;		// �ε������ �ǹ� (return ���� mid�ϱ�)

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1) {
		printf("Ž���� �����߽��ϴ�. �ФѤ� \n");
	}
	else {
		printf("Ÿ���� ����� �ε����� �ٷ� : %d \n", idx);
	}

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 6);
	if (idx == -1) {
		printf("Ž���� �����߽��ϴ�. �ФѤ� \n");
	}
	else {
		printf("Ÿ���� ����� �ε����� �ٷ� : %d \n", idx);
	}
	return 0;
}

/*
[���� ���]
Ÿ���� ����� �ε����� �ٷ� : 5
Ž���� �����߽��ϴ�. �ФѤ�

[�ڵ� �м�]
1. while �ݺ����� �������� ������ ���� Ž�� �˰����� ��� �Լ��� ���� �����Ͽ���. 
2. �̶� ����� Ż�� ������ while �ݺ��� Ż�� ���ǰ� �����ϰ� �����Ͽ���. 
3. ��� �Լ��� first�� last�� ������ ���ϵ��� �Ͽ�, �ݺ����� ȣ���� ���� �˰��� ������ �����ϰ� �Ͽ���. 
4. �� first�� last�� ���ǿ� ���� �����ϸ鼭 (mid�� Ȱ���Ͽ�) �ݺ������� ����� �Լ����� ȣ���Ѵ�. 
5. ��� �Լ��� Ż�� ������ �����ǰų� Ȥ�� mid�� ã���� return�� ���� �ݺ����� ������ �ߴ��Ѵ�. 
+ ��� �Լ� �ڵ��� �帧, ȣ�� ������ �Ϻ��ϰ� �ľ��ϴ� �ͺ���, ������ �ڵ�� ��Ȯ�ϰ� ǥ���ϴ� �Ϳ� �����Ѵ�. 

*/