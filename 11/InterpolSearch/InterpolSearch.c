#include <stdio.h>

int InterpolSearch(int arr[], int first, int last, int target) {
	int mid;

	if (arr[first] > target || arr[last] < target) {
		return -1;
	}

	mid = ((double)(target - arr[first]) / (arr[last] - arr[first]) * (last - first)) + first;

	if (arr[mid] == target) {
		return mid;
	}
	else if (target < arr[mid]) {
		return InterpolSearch(arr, first, mid - 1, target);
	}
	else {
		return InterpolSearch(arr, mid + 1, last, target);
	}
}

int main() {
	int arr[] = { 1,3,5,7,9 };
	int idx;

	idx = InterpolSearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
	if (idx == -1) {
		printf("탐색 실패 \n");
	}
	else {
		printf("타겟 저장 인덱스: %d \n", idx);
	}

	idx = InterpolSearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 2);
	if (idx == -1) {
		printf("탐색 실패 \n");
	}
	else {
		printf("타겟 저장 인덱스: %d \n", idx);
	}

	return 0;
}

/*

[Output]

타겟 저장 인덱스: 3
탐색 실패

*/
