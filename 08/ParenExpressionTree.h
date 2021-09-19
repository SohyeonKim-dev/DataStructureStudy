#ifndef __PAREN_EXPRESSION_TREE_H__
#define __PAREN_EXPRESSION_TREE_H__

#include "BinaryTree2.h"

BTreeNode* MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode* bt);

void ShowPrefixTypeExp(BTreeNode* bt);
void ShowInfixTypeExp(BTreeNode* bt);
void ShowPostficTypeNode(BTreeNode* bt);

#endif __PAREN_EXPRESSION_TREE_H__