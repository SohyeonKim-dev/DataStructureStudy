# include <stdio.h>
# include <stdlib.h>

typedef struct _node 
{
	int data;
	struct _node* next;
} Node;

int main() {
	Node* head = NULL ;
	Node* tail = NULL ;
	Node* cur = NULL ;

	Node* newNode = NULL;
	int readData;

	// 데이터 입력 과정 

	while (1) {											// 무한 루프로 웹사이트에서 돌렸을 때, 오류 발생
		printf("자연수 입력: ");
		scanf("%d", &readData);
		
		if (readData < 1)
			break;

		// 노드 추가 과정

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	// 입력 받은 데이터의 출력 과정 
	printf("입력 받은 데이터의 전체 출력! \n");

	if (head == NULL) {
		printf("저장된 자연수가 존재하지 않습니다. \n");
	}
	else {
		cur = head;
		printf("%d ", cur->data);		// first 데이터 출력

		while (cur->next != NULL) {		// Second 이후의 데이터 출력 과정 
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	//메모리 해제 과정

	if (head == NULL) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d 삭제합니다. \n", head->data);
		free(delNode);		// first node 삭제

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d 삭제합니다. \n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}

/*

[실행 결과]


[코드 분석]

*/
