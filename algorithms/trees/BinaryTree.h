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
	TreeNode* root;
public:
	void create();
	void level_order();
};

