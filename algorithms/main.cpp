#include <iostream>
#include "./linked_list/linked_list.h"

int main() {
	int arr1[]{ 2, 8, 10, 15 };
	int arr2[]{ 4, 7, 12, 14 };
	Linked_list* list1 = new Linked_list;
	Linked_list* list2 = new Linked_list;
	list1->create_from_array(arr1, 4);
	list2->create_from_array(arr2, 4);
	list1->merge(list2);
	list1->push_back(99);
	list1->display();
}