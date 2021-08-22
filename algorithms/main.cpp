#include <iostream>
#include "./queue/queue.h"


int main() {

	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.dequeue();
	q.display();
}