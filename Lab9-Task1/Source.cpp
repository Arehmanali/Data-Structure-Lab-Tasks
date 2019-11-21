#include<iostream>
#include"cQue.h"
using namespace std;
int main()
{
	cNode* c1, c2, * c3, * c4, * c5;			//Decleration of pointers objects of cNode class except c2
	c1 = new cNode(1);							// Object C1 set to new Node
	c2.setData(2);								// Setter function of cNode class to set data of C2 object
	c3 = new cNode(3);
	c4 = new cNode(4);
	c5 = new cNode(5);

	cQue que;
	que.enQue(c1);				// add c1 to object q1
	que.enQue(c3);				// add c3 to object q1
	que.enQue(c4);				// add c4 to object q1
	que.enQue(c5);				// add c5 to object q1
	cout << "\nQue after pushing the Nodes\n";
	que.print();				// print all the nodes of object q1
	que.deQue();			// remove the last node from q1 i.e c1
	cout << "\nQue after removing the first Nodes\n";
	que.print();
	cout << "\n Front item in Queue is: " << que.front();
	cout << "\n Rear item in Queue is: " << que.rear() << endl;
	return 0;
}