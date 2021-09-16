#include "BinaryTree.h"
#include <iostream>
TreeNode::TreeNode() : left_child{ nullptr }, right_child{ nullptr }, value{0}{}
void BinaryTree::create() {
	TreeNode* p, * t;
	Queue q;
	int x;
	std::cout << "Enter root value" << std::endl;
	std::cin >> x;
	root = new TreeNode;
	root->value = x;
	q.enqueue(reinterpret_cast<int>(root));
	while (!q.isEmpty()) {
		p = reinterpret_cast<TreeNode*>(q.dequeue());
		std::cout << "Enter a left child" << std::endl;
		std::cin >> x;
		if (x != -1) {
			t = new TreeNode;
			t->value = x;
			p->left_child = t;
			q.enqueue(reinterpret_cast<int>(t));
		}
		std::cout << "Enter a right child" << std::endl;
		std::cin >> x;
		if (x != -1) {
			t = new TreeNode;
			t->value = x;
			p->right_child = t;
			q.enqueue(reinterpret_cast<int>(t));
		}
	}
}
void BinaryTree::level_order() {
	TreeNode* p = root;
	Queue q;
	std::cout << p->value << std::endl;
	q.enqueue(reinterpret_cast<int>(p));
	while (!q.isEmpty()) {
		p = reinterpret_cast<TreeNode*>(q.dequeue());
		if (p->left_child != nullptr) {
			q.enqueue(reinterpret_cast<int>(p->left_child));
			std::cout << p->left_child->value << " ";
		}
		if (p->right_child != nullptr) {
			q.enqueue(reinterpret_cast<int>(p->right_child));
			std::cout << p->right_child->value << " ";
		}
	}
}