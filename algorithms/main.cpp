#include <iostream>
#include "./trees/BinaryTree.h"
#include "./trees/BST.h"

int main() {

	BST tree;
	tree.create();
	auto node = tree.Isearch(3);
	std::cout << "value is: " << node->value << std::endl;
}