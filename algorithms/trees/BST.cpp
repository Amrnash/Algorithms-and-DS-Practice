#include "BST.h"
TreeNode* BST::Rsearch(int key) {
	static TreeNode* t = root;
	if (t == nullptr) {
		return nullptr;
	}
	if (key == t->value) {
		return t;
	}
	else if (key < t->value) {
		t = t->left_child;
		return Rsearch(key);
	}
	else if (key > t->value) {
		t = t->right_child;
		return Rsearch(key);
	}
}

TreeNode* BST::Isearch(int key) {
	static TreeNode* t = root;
	while (t != nullptr) {
		if (t->value == key) {
			return t;
		}
		else if (key > t->value) {
			t = t->right_child;
		}
		else if (key < t->value) {
			t = t->left_child;
		}
	}
	return nullptr;
}