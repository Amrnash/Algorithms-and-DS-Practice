#include "linked_list.h"
#include <iostream>

Node::Node() : value{ 0 }, next{nullptr} {}

Linked_list::Linked_list() : length{ 0 }, first{ nullptr }, last{nullptr} {}
Linked_list::Linked_list(Node* first, Node* last) : length{1} {
	this->first = first;
	this->last = last;
}
void Linked_list::create_from_array(int A[], int n) {
	first->value = A[0];
	Node* last_node;
	last_node = first;
	for (int i{ 1 }; i < n; i++) {
		Node* new_node = new Node;
		new_node->value = A[i];
		last_node->next = new_node;
		last_node = new_node;
		length++;
	}
	last = last_node;
}
void Linked_list::display() {
	Node* current_node;
	current_node = first;
	while (current_node != nullptr)
	{
		std::cout << current_node->value << std::endl;
		current_node = current_node->next;
	}
}
void Linked_list::display_recursive() {
	static Node* p = first;
	if (!p) return;
	std::cout << p->value << std::endl;
	p = p->next;
	display_recursive();
}
int Linked_list::max() {
	int max = INT_MIN;
	Node* p = first;
	while (p) {
		if (p->value > max) {
			max = p->value;
		}
		p = p->next;
	}
	return max;
}
Node* Linked_list::search(int value) {
	Node* p = first;
	while (p) {
		if (p->value == value) return p;
		p = p->next;
	}
	return nullptr;
}
void Linked_list::insert(int pos, int value) {
	Node* new_node = new Node;
	new_node->value = value;
	if (pos == 0) {
		new_node->next = first;
		first = new_node;
		last = first;
		length++;
	}
	else if (pos == length) {
		Node* new_node = new Node;
		new_node->value = value;
		last->next = new_node;
		last = last->next;
	}
	else {
		Node* p;
		p = first;
		for (int i{ 0 }; i < pos - 1; i++) {
			p = p->next;
		}
		new_node->next = p->next;
		p->next = new_node;
		length++;
	}
}
void Linked_list::push_back(int value) {
	Node* new_node = new Node;
	new_node->value = value;
	last->next = new_node;
	last = last->next;
}
int Linked_list::remove(int pos) {
	if (pos < 1) return -1;
	if (pos == 1) {
		Node* p = first;
		first = first->next;
		int x = p->value;
		delete p;
		return x;
	}
	else {
		Node* p = first;
		Node* q = nullptr;
		for (int i{ 0 }; i < pos - 1; i++) {
			q = p;
			p = p->next;
		}
		q->next = p->next;
		int x = p->value;
		delete p;
		return x;
	}
}
void Linked_list::reverse() {
	Node* p = first;
	Node* q = nullptr;
	Node* r = nullptr;
	last = first;
	while (p) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}
void Linked_list::merge(Linked_list* second_list) {
	Node* new_list_first{ nullptr };
	Node* new_list_last{ nullptr };
	if (first < second_list->first) {
		new_list_first = first;
		new_list_last = first;
		first = first->next;
	}
	else {
		new_list_first = second_list->first;
		new_list_last = second_list->first;
		second_list->first = second_list->first->next;
	}
	while (first && second_list->first) {
		if (first->value < second_list->first->value) {
			new_list_last->next = first;
			new_list_last = first;
			first = first->next;
			new_list_last->next = nullptr;
		}
		else {
			new_list_last->next = second_list->first;
			new_list_last = second_list->first;
			second_list->first = second_list->first->next;
			new_list_last->next = nullptr;
		}
	}
	if (first != nullptr) {
		new_list_last->next = first;
	}
	if (second_list->first != nullptr) {
		new_list_last->next = second_list->first;
		last = second_list->last;
	}
	first = new_list_first;
}