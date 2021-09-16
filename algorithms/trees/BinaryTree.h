#pragma once
#include <iostream>
#include "../linked_list/linked_list.h"
#include "../queue/queue.h"
class TreeNode
{
public:
	int value;
	TreeNode();
	TreeNode* left_child;
	TreeNode* right_child;
};
class BinaryTree
{
public:
	TreeNode* root;
	void create();
	void level_order();
};

