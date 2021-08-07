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
		printf("탐색을 실패하였습니다. ㅠㅡㅠ \n");
	}
	else {
		printf("타겟이 저장된 인덱스는: %d \n", idx);
	}

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (idx == -1) {
		printf("탐색을 실패하였습니다. ㅠㅡㅠ \n");
	}
	else {
		printf("타겟이 저장된 인덱스는: %d \n", idx);
	}

	return 0;
}

/*

[실행 결과]
타겟이 저장된 인덱스는: 4
탐색을 실패하였습니다. ㅠㅡㅠ

[코드 분석]
1. 이진 탐색 알고리즘은 정렬된 데이터에 적용해야 한다. 
2. 해당 알고리즘의 시간 복잡도 함수 T(n) = log2(n)이다. // +1은 생략
3. while문 내부의 조건이 first <= last임에 주의하자. // first와 last가 같은 경우라면, 1번의 비교 연산 시행이 남음.
4. mid +- 1 주의! (mid 포함하면 무한 루프에 걸린다. first보다 last가 작아질 수 없기 때문에!)

*/ 