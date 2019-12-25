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
		void submitmission(string reg);			// submit assignment using string
		void marking(cNode*& ptr);			// compute the marks of student
		cNode* removeAssignment();
		void print()const;
		~Assignment();
};



