#include <stdio.h>
#include "BinaryTree.h"

void InorderTraverse(BTreeNode* bt) {
	if (bt == NULL) {
		return;
	}

	InorderTraverse(bt->left);
	printf("%d \n", bt->data);
	InorderTraverse(bt->right);
}

int main() {

	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	ReMakeLeftSubTree(bt1, bt2);
	ReMakeRightSubTree(bt1, bt3);
	ReMakeLeftSubTree(bt2, bt4);

	InorderTraverse(bt1);
	return 0;
}

/*

[Output]

4
2
1
3

*/