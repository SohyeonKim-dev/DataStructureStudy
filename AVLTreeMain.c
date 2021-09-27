#include <stdio.h>
#include "BinarySearchTree3.h"

BTreeNode* RotateLL(BTreeNode* bst) {
	BTreeNode* pNode;
	BTreeNode* cNode;

	pNode = bst;
	cNode = GetLeftSubTree(pNode);

	ChangeLeftSubTree(pNode, GetRightSubTree(cNode));
	ChangeRightSubTree(cNode, pNode);
	return cNode;
}

BTreeNode* RotateRR(BTreeNode* bst)
{
	BTreeNode* pNode;
	BTreeNode* cNode;

	pNode = bst;
	cNode = GetRightSubTree(pNode);

	ChangeRightSubTree(pNode, GetLeftSubTree(cNode));
	ChangeLeftSubTree(cNode, pNode);
	return cNode;
}

BTreeNode* RotateRL(BTreeNode* bst)
{
	BTreeNode* pNode;
	BTreeNode* cNode;

	pNode = bst;
	cNode = GetRightSubTree(pNode);

	ChangeRightSubTree(pNode, RotateLL(cNode));  
	return RotateRR(pNode);    
}

BTreeNode* RotateLR(BTreeNode* bst)
{
	BTreeNode* pNode;
	BTreeNode* cNode;

	pNode = bst;
	cNode = GetLeftSubTree(pNode);

	ChangeLeftSubTree(pNode, RotateRR(cNode));  
	return RotateLL(pNode);    
}

int GetHeight(BTreeNode* bst) {
	int leftHeight;
	int rightHeight;

	if (bst == NULL) {
		return 0;
	}

	leftHeight = GetHeight(GetLeftSubTree(bst));
	rightHeight = GetHeight(GetRightSubTree(bst));

	if (leftHeight > rightHeight) {
		return leftHeight + 1;
	}
	else {
		return rightHeight + 1;
	}
}

int GetHeightDiff(BTreeNode* bst) {
	int leftsubtreeheight;
	int rightsubtreeheight;

	if (bst == NULL) {
		return 0;
	}

	leftsubtreeheight = GetHeight(GetLeftSubTree(bst));
	rightsubtreeheight = GetHeight(GetRightSubTree(bst));

	return leftsubtreeheight - rightsubtreeheight;
}

BTreeNode* Rebalance(BTreeNode** pRoot) {
	int heightDiff = GetHeightDiff(*pRoot);

	if (heightDiff > 1) {
		if (GetHeightDiff(GetLeftSubTree(*pRoot)) > 0) {
			*pRoot = RotateLL(*pRoot);
		}
		else {
			*pRoot = RotateLR(*pRoot);
		}
	}

	if (heightDiff < -1) {
		if (GetHeightDiff(GetRightSubTree(*pRoot)) < 0) {
			*pRoot = RotateRR(*pRoot);
		}
		else {
			*pRoot = RotateRL(*pRoot);
		}
	}
	return *pRoot;
}