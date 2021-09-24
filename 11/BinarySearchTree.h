#ifndef __BINARY_SEARCH_TREE__
#define __BINARY_SEARCH_TREE__

#include "BinaryTree2.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode** pRoot);

BSTData BSTGetNodeData(BTreeNode* bst);

void BSTInsert(BTreeNode** pRoot, BSTData data);

BTreeNode* BSTSearch(BTreeNode* bst, BSTData target);

# endif __BINARY_SEARCH_TREE__