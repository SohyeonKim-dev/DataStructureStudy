#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int main() {
	BTreeNode* avlRoot;
	BTreeNode* currentLeftNode;	
	BTreeNode* currentRightNode;		
	BSTMakeAndInit(&avlRoot);

	BSTInsert(&avlRoot, 1);
	BSTInsert(&avlRoot, 2);
	BSTInsert(&avlRoot, 3);
	BSTInsert(&avlRoot, 4);
	BSTInsert(&avlRoot, 5);
	BSTInsert(&avlRoot, 6);
	BSTInsert(&avlRoot, 7);
	BSTInsert(&avlRoot, 8);
	BSTInsert(&avlRoot, 9);

	printf("��Ʈ ���: %d \n", GetData(avlRoot));

	currentLeftNode = GetLeftSubTree(avlRoot);
	currentRightNode = GetRightSubTree(avlRoot);
	printf("����1: %d, ������1: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("����2: %d, ������2: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("����3: %d, ������3: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("����4: %d, ������4: %d \n", GetData(currentLeftNode), GetData(currentRightNode));
	return 0;
}

/*

[Output]

��Ʈ ���: 1

**bt**��(��) nullptr�����ϴ�. (error)


*/