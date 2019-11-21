#include "Assignment.h"
#include<iostream>
using namespace std;


Assignment::Assignment()
{
	front = NULL;
	rear = NULL;
	count = 0;
	regNum = "";
}

void Assignment::submitmission(string reg)
{
	cNode* ptr = new cNode();
	ptr->setRegNo(reg);				//setting name
	marking(ptr);						//setting marks
	if (front == NULL)				 //if queue is empty
	{
		front = rear = ptr;
		front->next=NULL;
	}
	else			//if queue is not empty
	{
		rear->next = ptr;
		rear = ptr;
	}

	rear->next = NULL;
	ptr = NULL;
	count++;
}

void Assignment::marking(cNode*& ptr)
{
	if (count < 5) ptr->setData(10);
	else if (count > 4 && count <= 7) ptr->setData(7);
	else if (count > 7 && count <= 9) ptr->setData(5);
	else ptr->setData(0);
}

cNode* Assignment::removeAssignment()
{
	cNode* ptr = front;
	if (front->next==NULL)
	{
		rear = NULL;
	}
	front = front->next;
	ptr->next = NULL;
	return ptr;
}

void Assignment::print() const
{
	cNode* ptr = front;					//Declaring a runner pointer to move through
	for (int i = 0; i < count; i++)
	{
		ptr->printRegNo();
		cout << "				";
		ptr->print();
		cout << "				";
		if (i > 9) cout << "Late Submitted\n";
		cout << endl;
		ptr = ptr->next;
	}
}

Assignment::~Assignment()
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
