#include <iostream>
#include "./queue/queue.h"


int main() {

	Queue_array q(5);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.display();
}