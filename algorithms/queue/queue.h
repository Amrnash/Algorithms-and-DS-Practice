#pragma once
#include "../linked_list/linked_list.h"
class Queue_array
{
	int size;
	int front;
	int rear;
	int* q;
public:
	Queue_array(int size);
	void enqueue(int value);
	int dequeue();
	void display();
};

