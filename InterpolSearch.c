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
		printf("Å½»ö ½ÇÆĞ \n");
	}
	else {
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
	}

	idx = InterpolSearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 2);
	if (idx == -1) {
		printf("Å½»ö ½ÇÆĞ \n");
	}
	else {
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
	}

	return 0;
}

/*

[Output]

Å¸°Ù ÀúÀå ÀÎµ¦½º: 3
Å½»ö ½ÇÆĞ

*/