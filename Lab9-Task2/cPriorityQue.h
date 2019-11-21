#pragma once
#include"cNode.h"
using namespace std;

class cPriorityQue 
{
	int count;
public:
	cNode* front;
	cNode* rear;
	cPriorityQue(cNode*& ptr);								// Parametric Constructor
	cPriorityQue();											// Default Constructor
	bool isNotEmpty()const;									// To check Non-Emptyness of cPriorityQue
	bool isEmpty()const;									// To check Emptyness of cPriorityQue
	cPriorityQue& insert_with_priority(cNode*& ptr);		// To add new node at the prioritized position
	void print()const;										// Print the nodes	
	cNode* get_highest_priority();							// Remove the nodes from the end of cPriorityQue
	int frontNode();
	int rearNode();
	~cPriorityQue();
};