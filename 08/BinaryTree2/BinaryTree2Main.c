#include <stdio.h>
#include "BinaryTree2.h"

void ShowIntData(int data);

int main() {
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();
	BTreeNode* bt5 = MakeBTreeNode();
	BTreeNode* bt6 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);

	ReMakeLeftSubTree(bt1, bt2);
	ReMakeRightSubTree(bt1, bt3);
	ReMakeLeftSubTree(bt2, bt4);
	ReMakeRightSubTree(bt2, bt5);
	ReMakeRightSubTree(bt3, bt6);

	PreorderTraverse(bt1, ShowIntData);
	printf("\n");
	InorderTraverse(bt1, ShowIntData);
	printf("\n");
	PostorderTraverse(bt1, ShowIntData);
	printf("\n");

	return 0;
}

void ShowIntData(int data) {
	printf("%d ", data);
}

/*

[Output]

1 2 4 5 3 6
4 2 5 1 3 6
4 5 2 6 3 1

*/