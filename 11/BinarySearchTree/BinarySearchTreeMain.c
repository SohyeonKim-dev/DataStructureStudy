#include <stdio.h>
#include "BinarySearchTree.h"

int main() {
	BTreeNode* bstRoot;
	BTreeNode* sNode;

	BSTMakeAndInit(&bstRoot);

	BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 1);
	BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 2);
	BSTInsert(&bstRoot, 8);
	BSTInsert(&bstRoot, 3);
	BSTInsert(&bstRoot, 5);

	sNode = BSTSearch(bstRoot, 1);
	if (sNode == NULL) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));
	}

	sNode = BSTSearch(bstRoot, 4);
	if (sNode == NULL) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));
	}

	sNode = BSTSearch(bstRoot, 6);
	if (sNode == NULL) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));
	}

	sNode = BSTSearch(bstRoot, 7);
	if (sNode == NULL) {
		printf("Ž�� ���� \n");
	}
	else {
		printf("Ž���� ������ Ű�� ��: %d \n", BSTGetNodeData(sNode));
	}

	return 0;
}

/*

[Output]

Ž���� ������ Ű�� ��: 1
Ž�� ����
Ž���� ������ Ű�� ��: 6
Ž�� ����

*/