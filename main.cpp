#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int argc, char** argv) {
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	list1.insertAfter(20,55);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << "Nilai node 3: " << list1.head->next->next->value << endl;
	
	cout << "Urutan LinkedList 1: ";
	list1.printAll();
	
	cout << "Urutan LinkedList 2: ";
	LinkedList list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printAll();
	
	return 0;
}