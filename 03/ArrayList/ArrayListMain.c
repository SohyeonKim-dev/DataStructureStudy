# include <stdio.h>
#include "ArrayList.h"

int main() {
	//ArrayList의 생성 및 초기화
	List list;
	int data;
	ListInit(&list);

	//5개의 데이터 저장
	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 33);
	LInsert(&list, 22);

	//저장된 데이터 전체 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");

	//숫자 2를 탐색하여, 전부 삭제
	if (LFirst(&list, &data)) {
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data)) {
			if (data == 22) 
				LRemove(&list);
		}
	}

	//삭제 후 남은 데이터 전체 출력
	printf("현재 데이터의 수: %d \n", LCount(&list));

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

[실행 결과]
현재 데이터의 수: 5
11 11 22 33 22

현재 데이터의 수: 3
11 11 33

[코드 분석]
1. 헤더 파일에 오타로 구조체 정의 마지막줄에 ';' 하나 더 적었다가 오류 102개 발생했다. 주의하자.. 

2. 실제 코드 분석 start  


*/
