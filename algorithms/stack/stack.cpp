#include "stack.h"
#include "../linked_list/linked_list.h"
Stack::Stack() {
	list = new Linked_list;
	top = list->first;
	length = list->length;
}
void Stack::push(int value) {
	list->insert(0, value);
	top = list->first;
	length++;
}
int Stack::pop() {
	int x = list->remove(1);
	top = list->first;
	return x;
}
void Stack::display() {
	list->display();
}
int Stack::get_top() {
	return top->value;
}