#pragma once
#include"cNode.h"
class Assignment
{
	cNode* front;
	cNode* rear;
	int count;
	string regNum;
public:
		Assignment();
		void submitmission(string reg);
		void marking(cNode*& ptr);
		cNode* removeAssignment();
		void print()const;
		~Assignment();
};



