#pragma once
#ifndef BinTree_H
#define BinTree_H

struct node
{
	int value;
	node* left;
	node* right;

};

class BinTree
{
public:
	BinTree();
	~BinTree();

	bool insert(int key);
	node* find(int key);
	void printNode(node* leaf);
	void destroyTree();

private:
	bool insert(int key, node* leaf);
	node* find(int key, node* leaf);
	void destroyTree(node* leaf);

	node* root;
};

#endif // !BinTree_H
