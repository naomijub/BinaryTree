#include "stdafx.h"
#include "BinTree.h"
#include <iostream>

using namespace std;

BinTree::BinTree()
{
	root = NULL;
}


BinTree::~BinTree()
{
}

bool BinTree::insert(int key) {
	if (root != NULL) {
		return insert(key, root);
	}
	try {
		root = new node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;
		return true;
	}
	catch (...) {
		return false;
	}
}

bool BinTree::insert(int key, node* leaf) {
	if (key < leaf->value) {
		if (leaf->left != NULL) {
			return insert(key, leaf->left);
		}
		leaf->left = new node;
		leaf->left->value = key;
		leaf->left->left = NULL;
		leaf->left->right = NULL;
		return true;
	}
	else if (key > leaf->value) {
		if (leaf->right != NULL) {
			return insert(key, leaf->right);
		}
		leaf->right = new node;
		leaf->right->value = key;
		leaf->right->left = NULL;
		leaf->right->right = NULL;
		return true;
	}
	return false;
}

node* BinTree::find(int key) {
	return find(key, root);
}

node* BinTree::find(int key, node* leaf) {
	if (leaf != NULL) {
		if (key == leaf->value) {
			return leaf;
		}
		else if (key < leaf->value) {
			return find(key, leaf->left);
		}
		else {
			return find(key, leaf->right);
		}
	}
	return NULL;
}

void BinTree::printNode(node* leaf) {
	cout << "Node value = " << leaf->value << endl;
}

void BinTree::destroyTree() {
	destroyTree(root);
}

void BinTree::destroyTree(node* leaf) {
	if (leaf != NULL) {
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
	
	
}