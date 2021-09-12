#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"


void QueueInit(Queue* pq) {
	pq->front = NULL;
	pq->rear = NULL;
}

int QIsEmpty(Queue* pq) {
	if (pq->front == NULL) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

void Enqueue(Queue* pq, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = data;

	if (QIsEmpty(pq)) {
		pq->front = newNode;
		pq->rear = newNode;
	}
	else {
		pq->rear->next = newNode; // ���� ����� �������� ���ο� ��� �߰�
		pq->rear = newNode; // rear�� �� ��带 ����Ű���� �Ѵ�. 
	}
}

Data Dequeue(Queue* pq) {
	Node* delNode;
	Data returnData;

	if (QIsEmpty(pq)) {
		printf("Queue Memory Error!");
		exit(-1);
	}

	delNode = pq->front;
	returnData = delNode->data;
	pq->front = pq->front->next;

	free(delNode);
	return returnData;
}

Data QPeek(Queue* pq) {

	if (QIsEmpty(pq)) {
		printf("Queue Memory Error!");
		exit(-1);
	}
	return pq->front->data;
}
