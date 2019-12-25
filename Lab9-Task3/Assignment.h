#pragma once
#include"cNode.h"
class Assignment
{
	cNode* front;
	cNode* rear;
	int count;
	string regNum;
public:
		Assignment();					// default constructor
		void submitmission(string reg);			// submit marks using string
		void marking(cNode*& ptr);
		cNode* removeAssignment();
		void print()const;
		~Assignment();
};



