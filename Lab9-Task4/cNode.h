#pragma once

class cNode {
	int data;					// data member of cNode of integer type
public:
	cNode* next;				// pointer of cNode class for taking address of next Node
	cNode();					//Defalut Constructor of cNode class
	cNode(int d);							// Parametrized Constructor of cNode class
	int getData();						// for getting value of Node of return type integer
	void setData(int d);					// for setting value of Node of return type void
	void print()const;						// Print the value of Nodes
};
