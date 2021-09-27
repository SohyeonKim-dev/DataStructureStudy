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

	printf("루트 노드: %d \n", GetData(avlRoot));

	currentLeftNode = GetLeftSubTree(avlRoot);
	currentRightNode = GetRightSubTree(avlRoot);
	printf("왼쪽1: %d, 오른쪽1: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("왼쪽2: %d, 오른쪽2: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("왼쪽3: %d, 오른쪽3: %d \n", GetData(currentLeftNode), GetData(currentRightNode));

	currentLeftNode = GetLeftSubTree(currentLeftNode);
	currentRightNode = GetRightSubTree(currentRightNode);
	printf("왼쪽4: %d, 오른쪽4: %d \n", GetData(currentLeftNode), GetData(currentRightNode));
	return 0;
}

/*

[Output]

루트 노드: 1

**bt**이(가) nullptr였습니다. (error)


*/