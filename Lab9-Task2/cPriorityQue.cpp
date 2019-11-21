#include "cPriorityQue.h"
#include <iostream>
using namespace std;

/* Parametric Constructor*/
cPriorityQue::cPriorityQue(cNode*& ptr)
{
	front = rear = ptr;
	rear->next = ptr = NULL;
	count = 1;
}

/* Default Constructor*/
cPriorityQue::cPriorityQue() : count(0),front(NULL),rear(NULL) {}

/*To add new node at the prioritized position*/
cPriorityQue& cPriorityQue::insert_with_priority(cNode*& ptr)
{
	if (!front)
	{
		front = rear = ptr;
		count++;
		rear->next = ptr = NULL;
	}
	else if (front->priority < ptr->priority)
	{
		ptr->next = front;
		front = ptr;
		ptr = NULL;
		count++;
	}
	else if (rear->priority >= ptr->priority)
	{
		rear->next = ptr;
		rear = ptr;
		rear->next = ptr = NULL;
		count++;
	}
	else
	{
		cNode* rptr = front;
		while (rptr->priority >= ptr->priority)
		{
			rptr = rptr->next;
		}
		ptr->next = rptr->next;
		rptr->next = ptr;
		count++;
		ptr = NULL;
	}
	return *this;

}


/*Print the nodes	*/
void cPriorityQue::print()const
{
	if (!front) { cout << "PriorityQue is Empty" << endl; }
	else {
		cNode* ptr = front;
		while (ptr) {
			ptr->print();
			cout << "		Priority:" << ptr->getPriority() << endl;
			ptr = ptr->next;
		}
	}
}

/*To check Non-Emptyness of cPriorityQue*/
bool cPriorityQue::isNotEmpty()const
{
	if (front) return true;
	else return false;
}

/*To check Emptyness of cPriorityQue*/
bool cPriorityQue::isEmpty()const
{
	if (!front) return true;
	else return false;
}

/*Remove the nodes from the end of cPriorityQue*/
cNode* cPriorityQue::get_highest_priority()
{
	cNode* ptr = front;
	front = front->next;
	ptr->next = NULL;
	--count;
	return ptr;
}


int cPriorityQue::frontNode()
{
	if (!front)cerr << "\n cPriorityQue has NO front Node\n";
	cNode* ptr;
	ptr = front;
	return ptr->getData();
}

int cPriorityQue::rearNode()
{
	if (!rear)cerr << "\n cPriorityQue has NO Rear Node\n";
	cNode* ptr;
	ptr = rear;
	return ptr->getData();
}

cPriorityQue::~cPriorityQue()
{
	cNode* ptr = front;
	while (ptr) {
		ptr = ptr->next;
		delete front;
		front = ptr;
		count--;
	}
}

