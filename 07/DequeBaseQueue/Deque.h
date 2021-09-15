#ifndef __DEQUE_H__
#define __DEQUE_H__


#define TRUE		1
#define FALSE		0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

typedef struct _doublelistDeque {
	Node* head;
	Node* tail;
}DoubleListDeque;

typedef DoubleListDeque Deque;

void DequeInit(Deque* pdeq);
int DQIsEmpty(Deque* pdeq);

void DQAddFirst(Deque* pdeq, Data data);
void DQAddLast(Deque* pdeq, Data data);

Data DQRemoveFirst(Deque* pdeq);
Data DQRemoveLast(Deque* pdeq);

Data DQGetFirst(Deque* pdeq);
Data DQGetLast(Deque* pdeq);

#endif __DEQUE_H__