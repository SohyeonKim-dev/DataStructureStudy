#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree2.h"

int main() {
	BTreeNode* bstRoot;
	BTreeNode* searchNode;

	BSTMakeAndInit(&bstRoot);

	BSTInsert(&bstRoot, 5);
	BSTInsert(&bstRoot, 8);
	BSTInsert(&bstRoot, 1);
	BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 4);
	BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 3);
	BSTInsert(&bstRoot, 2);
	BSTInsert(&bstRoot, 7);

	BSTShowAll(bstRoot);
	printf("\n");
	searchNode = BSTRemove(&bstRoot, 3);
	free(searchNode);

	BSTShowAll(bstRoot);
	printf("\n");
	searchNode = BSTRemove(&bstRoot, 8);
	free(searchNode);

	BSTShowAll(bstRoot);
	printf("\n");
	searchNode = BSTRemove(&bstRoot, 1);
	free(searchNode);

	BSTShowAll(bstRoot);
	printf("\n");
	searchNode = BSTRemove(&bstRoot, 6);
	free(searchNode);

	BSTShowAll(bstRoot);
	printf("\n");
	return 0;

}

/*

[Output]

5 7
5 7
5 7
5 7
5 7

*/
