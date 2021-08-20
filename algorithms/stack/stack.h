#pragma once
#include "../linked_list/linked_list.h"
class Stack
{
private:
	Linked_list* list;
	Node* top;
public:
	Stack();
	int length;
	void push(int value);
	int pop();
	void display();
};

