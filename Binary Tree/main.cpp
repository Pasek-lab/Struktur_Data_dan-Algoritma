#include <iostream>
#include "BinaryTree.h"

using namespace std;


int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(15);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(20);
	bin.insertNode(25);
	
	bin.inOrder();
	cout<< endl;
	bin.postOrder();
	cout<< endl;
	bin.preOrder();
	cout << endl;
	
// Implementasi maximum dan minimum
	Node* maxNode = bin.findMax();
	if (maxNode != NULL) {
		cout << "Nilai maksimum: " << maxNode->val << endl;
	}
	
	Node* minNode = bin.findMin();
	if (minNode != NULL) {
		cout << "Nilai minimum: " << minNode->val << endl;
	}
	
	cout << "Search node 3:  ";
	Node* searchResult = bin.searchNode(3);
	if (searchResult != NULL) {
		cout << "Ditemukan" << endl;
	}
	else {
		cout << "Tidak ditemukan" << endl;
	}
	
	cout << "Delete node 20" << endl;
	bin.deleteNode(20);
	
	return 0;
}