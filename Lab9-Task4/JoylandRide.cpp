#include"JoylandRide.h"
#include<iostream>
using namespace std;

joylandRide::joylandRide()
{
	front = NULL;
	rear = NULL;
	count = 0;
}

joylandRide::joylandRide(cNode*& ptr)
{
	front = rear = ptr;
	rear->next = NULL;
	count = 1;
	ptr = NULL;
}

joylandRide& joylandRide::enQue(cNode*& ptr)
{
	if (rear)
	{
		rear->next = ptr;
		rear = rear->next;
	}
	else
	{
		rear = front = ptr;
	}
	rear->next = NULL;
	ptr = NULL;
	count++;
	return *this;
}

cNode* joylandRide::deQue()
{
	cNode* ptr;
	if (!front)cerr << "\n cQue is empty\n";
	ptr = front;
	front = front->next;
	ptr->next = NULL;
	--count;
	return ptr;
}
void joylandRide::print() const
{
	if (!front) { cerr << "Queue is Empty" << endl; }
	else {
		cNode* ptr = front;
		while (ptr) {
			ptr->print();
			ptr = ptr->next;
		}
	}
}

int joylandRide::getCount()
{
	return count;
}


joylandRide::~joylandRide()
{
	cNode* ptr = front;
	while (ptr)
	{
		ptr = ptr->next;
		delete front;
		front = ptr;
		--count;
	}
}
