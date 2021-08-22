#include "queue.h"
#include <iostream>

Queue_array::Queue_array(int size) : size{size} {
	q = new int[size];
	front = 0;
	rear = 0;
}
void Queue_array::enqueue(int value) {
	if ((rear + 1) % size == front) {
		std::cout << "queue is full" << std::endl;
	}
	else {
		rear = (rear + 1) % size;
		q[rear] = value;
	}
}
int Queue_array::dequeue() {
	if (front == rear) {
		std::cout << "queue is empty" << std::endl;
	}
	else {
		front = (front + 1) % size;
		int x = q[front];
		return x;
	}
}
void Queue_array::display() {
	if (front == rear) {
		std::cout << "queue is empty" << std::endl;
		return;
	}
	int i{front + 1};
	while (i != rear) {
		std::cout << q[i] << std::endl;
		i = (i + 1) % size;
	}
	std::cout << q[rear] << std::endl;
}