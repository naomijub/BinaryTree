// BinaryTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "BinTree.h"

using namespace std;
int main()
{
	int i;
	BinTree* bt = new BinTree();
	cout<<bt->insert(5)<<endl;
	cout << bt->insert(3) << endl;
	cout << bt->insert(7) << endl;
	cout << bt->insert(5) << endl;

	cin >> i;
    return 0;
}

