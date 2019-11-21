#pragma once
#include"cNode.h"

class joylandRide
{
	cNode* front;
	cNode* rear;
	int count;
public:
	joylandRide();
	joylandRide(cNode*& ptr);
	joylandRide& enQue(cNode*& ptr);
	cNode* deQue();
	void print()const;
	int getCount();
	~joylandRide();
};

