# include <stdio.h>
# include <stdlib.h>
# include "DLinkedList.h"

void ListInit(List* plist) {
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->comp = NULL;
	plist->NumOfData = 0;
}

void FInsert(List* plist, LData data) {
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->head->next = newNode;

	(plist->NumOfData)++;
}

void SInsert(List* plist, LData data) { } // 다음 장에서 구현

void LInsert(List* plist, LData data) {
	if (plist->comp == NULL) {
		FInsert(plist, data);
	}
	else {
		SInsert(plist, data);
	}
}

int LFirst(List* plist, LData *pdata) {
	if (plist->head->next == NULL) {
		return FALSE;
	}
	plist->before = plist->head;
	plist->cur = plist->head->next;

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, LData* pdata) {
	if (plist->cur->next == NULL) {
		return FALSE;
	}
	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

LData LRemove(List* plist) {
	Node* rpos = plist->cur;
	LData rdata = rpos->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->NumOfData)--;
	return rdata;
}

int LCount(List* plist) {
	return plist->NumOfData;
}

void SetSortRule(List *plist, int (*comp)(LData d1, LData d2)) { } // 다음 장에서 구현