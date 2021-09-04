#ifndef __DOUBLE_LINKED_LIST__
#define __DOUBLE_LINKED_LIST__

#define TRUE		1
#define FALSE		0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

typedef struct _DoubleLinkedList {
	Node* head;
	Node* cur;
	int numOfData;
} DoubleLinkedList;

typedef DoubleLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data);

int LFirst(List* plist, Data * pdata);
int LNext(List* plist, Data * pdata);
int LPrevious(List* plist, Data * pdata);
int LCount(List* plist);

#endif __DOUBLE_LINKED_LIST__
