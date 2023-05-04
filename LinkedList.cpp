#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
		
}

void LinkedList::insertToTail(int input) {
	Node *newNode = new Node();
	newNode->value = input;
	newNode->next = NULL;
	
	if(head == NULL){
		head = tail = newNode;
		return;
	}
	
	tail->next = newNode;
	tail = newNode;
}

void LinkedList::insertAfter(int existingValue, int newValue) {
	if(head == NULL) {
		return;
	}
	
	Node *current = head;
	while(current->value == existingValue) {
		Node *newNode = new Node();
		newNode->value = newValue;
		newNode->next = current->next;
		current->next = newNode;
		if(current == tail){
			tail = newNode;	
		}
		return;
	}
	current = current->next;
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout <<endl;
}