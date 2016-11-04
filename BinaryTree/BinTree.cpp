#include "stdafx.h"
#include "BinTree.h"


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
