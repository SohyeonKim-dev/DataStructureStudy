#include <stdio.h>

void InsertionSort(int arr[], int n) {
	int i, j;
	int insertData;

	for (i = 1; i < n;i++) {
		insertData = arr[i];

		for (j = i - 1;j >= 0;j--) {
			if (arr[j] > insertData) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = insertData;
	}
}

int main() {
	int arr[5] = { 5,3,2,4,1 };
	int i;

	InsertionSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0;i < 5;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


/*

[Output]

1 2 3 4 5

*/