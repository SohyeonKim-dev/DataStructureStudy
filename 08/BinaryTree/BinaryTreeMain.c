#include <stdio.h>
#include "BinaryTree.h"

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

	printf("%d \n", GetData(GetLeftSubTree(bt1)));
	printf("%d \n", GetData(GetLeftSubTree(GetLeftSubTree(bt1))));

	return 0;

}

/*

[Output]

2
4

*/