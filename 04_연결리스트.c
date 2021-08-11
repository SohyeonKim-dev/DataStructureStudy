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

	// ������ �Է� ���� 

	while (1) {											// ���� ������ ������Ʈ���� ������ ��, ���� �߻�
		printf("�ڿ��� �Է�: ");
		scanf("%d", &readData);
		
		if (readData < 1)
			break;

		// ��� �߰� ����

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

	// �Է� ���� �������� ��� ���� 
	printf("�Է� ���� �������� ��ü ���! \n");

	if (head == NULL) {
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else {
		cur = head;
		printf("%d ", cur->data);		// first ������ ���

		while (cur->next != NULL) {		// Second ������ ������ ��� ���� 
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	//�޸� ���� ����

	if (head == NULL) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		printf("%d �����մϴ�. \n", head->data);
		free(delNode);		// first node ����

		while (delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}

/*

[���� ���]


[�ڵ� �м�]

*/