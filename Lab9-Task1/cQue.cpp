#include "cQue.h"
#include<iostream>
using namespace std;

cQue::cQue()
{
	head = NULL;
	tail = NULL;
	count = 0;
}

cQue::cQue(cNode*& ptr)
{
	head = tail = ptr;
	tail->next = NULL;
	count=1;
	ptr = NULL;
}

cQue& cQue::enQue(cNode*& ptr)
{
	if (tail)
	{
		tail->next = ptr;
		tail = tail->next;
	}
	else
	{
		tail = head = ptr;
	}
	tail->next = NULL;
	ptr = NULL;
	count++;
	return *this;
}

cNode* cQue::deQue()
{
	cNode* ptr;
	if (!tail)cerr << "\n cQue is empty\n";
	ptr = head;
	head = head->next;
	ptr->next = NULL;
	--count;
	return ptr;
}

int cQue::front()
{
	if (!head)cerr << "\n There is No front Node as List is Empty\n";
	cNode* ptr;
	ptr = head;
	return ptr->getData();
}

int cQue::rear()
{
	if (!tail)cerr << "\n There is No rear Node in List\n";
	cNode* ptr;
	ptr = tail;
	return ptr->getData();
}

void cQue::print() const
{
	if (!head) { cerr << "Queue is Empty" << endl; }
	else {
		cNode* ptr = head;
		while (ptr) {
			ptr->print();
			ptr = ptr->next;
		}
	}
}


cQue::~cQue()
{
	cNode* ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		delete head;
		head = ptr;
		--count;
	}
}
