#include <stdio.h>

void BubbleSort(int arr[], int n) {
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < (n - i) - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[4] = { 3,2,4,1 };
	int i;

	BubbleSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0;i < 4;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

/*

[Output1]

2 3 4 1

// j<(n-1)-1; -> j<(n-i)-1;
// 오타를 수정하니 제대로 정렬이 이루어짐을 확인할 수 있다. 

[Output2]

1 2 3 4

*/
