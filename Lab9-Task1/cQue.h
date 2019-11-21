#pragma once
#include"cNode.h"

class cQue
{
	cNode* head;
	cNode* tail;
	int count;
public:
	cQue();
	cQue(cNode*& ptr);
	cQue& enQue(cNode*& ptr);
	cNode* deQue();
	int front();
	int rear();
	void print()const;
	~cQue();
};

