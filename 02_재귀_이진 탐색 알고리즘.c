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
	int idx;		// 인덱스라는 의미 (return 값이 mid니까)

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1) {
		printf("탐색에 실패했습니다. ㅠㅡㅠ \n");
	}
	else {
		printf("타겟이 저장된 인덱스는 바로 : %d \n", idx);
	}

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 6);
	if (idx == -1) {
		printf("탐색에 실패했습니다. ㅠㅡㅠ \n");
	}
	else {
		printf("타겟이 저장된 인덱스는 바로 : %d \n", idx);
	}
	return 0;
}

/*
[실행 결과]
타겟이 저장된 인덱스는 바로 : 5
탐색에 실패했습니다. ㅠㅡㅠ

[코드 분석]
1. while 반복문을 바탕으로 구성된 이진 탐색 알고리즘을 재귀 함수를 통해 구현하였다. 
2. 이때 재귀의 탈출 조건을 while 반복문 탈출 조건과 동일하게 적용하였다. 
3. 재귀 함수에 first와 last를 스스로 지니도록 하여, 반복적인 호출을 통해 알고리즘 구현을 가능하게 하였다. 
4. 이 first와 last를 조건에 따라 변경하면서 (mid를 활용하여) 반복적으로 복사된 함수들을 호출한다. 
5. 재귀 함수의 탈출 조건이 만족되거나 혹은 mid를 찾으면 return을 통해 반복적인 동작을 중단한다. 
+ 재귀 함수 코드의 흐름, 호출 순서를 완벽하게 파악하는 것보다, 수식을 코드로 명확하게 표현하는 것에 집중한다. 

*/