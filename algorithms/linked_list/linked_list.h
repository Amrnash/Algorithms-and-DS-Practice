#pragma once
class Node {
public:
	int value;
	Node* next;
	Node();
};
class Linked_list
{
private:
	Node* first;
	Node* last;
public:
	int length;
	Linked_list();
	Linked_list(Node* first, Node* last);
	void create_from_array(int A[], int n);
	void display();
	void display_recursive();
	int max();
	Node* search(int value);
	void insert(int pos, int value);
	void push_back(int value);
	int remove(int pos);
	void reverse();
	void merge(Linked_list* second_list);
};

