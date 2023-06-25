#include <iostream>
#include "BinaryTree.h"
using namespace std;

// algoritma rekursiv
void BinaryTree::insertNode(int insertVal){
	
	
	root = insertNodeRecursive(root, insertVal);
		
}

	Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	
		if(currentRoot == NULL){
			currentRoot = new Node();
			currentRoot->val = insertValue;
			return currentRoot;
			
		}
		
		if(insertValue < currentRoot->val){
			currentRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
		}
		
		if(insertValue > currentRoot->val){
			currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
		}
		
		return currentRoot;
}	

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}
	
void BinaryTree::inOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->val << ", ";
		inOrderRecursive(currentRoot->right);
	}
}


void BinaryTree::postOrder(){
	postOrderRecursive(root);
}
	
void BinaryTree::postOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->val << ", ";
	}
}


void BinaryTree::preOrder(){
	preOrderRecursive(root);
}
	
void BinaryTree::preOrderRecursive(Node* currentRoot){
	if(currentRoot != NULL){
		
		cout << currentRoot->val << ", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
		
	}
}

// maximum dan minimum
Node* BinaryTree::findMax(){
	return findMaxRecursive(root);
}

Node* BinaryTree::findMaxRecursive(Node* currentRoot) {
	if (currentRoot == NULL) {
		return NULL;
	}
	
	Node* maxNode = currentRoot;
	while (maxNode->right != NULL) {
		maxNode = maxNode->right;
	}
	
	return maxNode;
}

Node* BinaryTree::findMin() {
	return findMinRecursive(root);
}

Node* BinaryTree::findMinRecursive(Node* currentRoot) {
	if (currentRoot == NULL) {
		return NULL;
	}
	
	Node* minNode = currentRoot;
	while (minNode->left != NULL) {
		minNode = minNode->left;
	}
	
	return minNode;
}

Node* BinaryTree::searchNode(int searchVal) {
	return searchNodeRecursive(root, searchVal);
}


Node* BinaryTree::searchNodeRecursive(Node* currentRoot, int searchVal) {
	if (currentRoot == NULL || currentRoot->val == searchVal) {
		return currentRoot;
	}
	
	if (searchVal < currentRoot->val) {
		return searchNodeRecursive(currentRoot->left, searchVal);
	}
	else {
		return searchNodeRecursive(currentRoot->right, searchVal);
	}
}

void BinaryTree::deleteNode(int deleteVal) {
	root = deleteNodeRecursive(root, deleteVal);
}

Node* BinaryTree::deleteNodeRecursive(Node* currentRoot, int deleteVal) {
	if (currentRoot == NULL) {
		return currentRoot;
	}
	
	if (deleteVal < currentRoot->val) {
		currentRoot->left = deleteNodeRecursive(currentRoot->left, deleteVal);
	}
	else if (deleteVal > currentRoot->val) {
		currentRoot->right = deleteNodeRecursive(currentRoot->right, deleteVal);
	}
	else {
		if (currentRoot->left == NULL) {
			Node* temp = currentRoot->right;
			delete currentRoot;
			return temp;
		}
		else if (currentRoot->right == NULL) {
			Node* temp = currentRoot->left;
			delete currentRoot;
			return temp;
		}
		
		Node* minRightSubtree = findMinRecursive(currentRoot->right);
		currentRoot->val = minRightSubtree->val;
		currentRoot->right = deleteNodeRecursive(currentRoot->right, minRightSubtree->val);
	}
	
	return currentRoot;
} 




