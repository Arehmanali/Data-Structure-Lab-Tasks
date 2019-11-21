#include<iostream>
#include"cPriorityQue.h"
using namespace std;

int main()
{
	/***************************************************************
			Driver Program For cNode Class
	***************************************************************/
	cNode* c1, c2, * c3, * c4, * c5;			//Decleration of pointers objects of cNode class except c2
	c1 = new cNode(1);							// Object C1 set to new Node
	c2.setData(2);								// Setter function of cNode class to set data of C2 object
	c3 = new cNode(3);
	c4 = new cNode(4);
	c5 = new cNode(5);

	/***************************************************************
		Driver Program For cPriorityQue Class
	 ***************************************************************/
	cPriorityQue pq1;						// pq1 object of cPriorityQue

	c1->setPriority(1);						// Set the priority of c1 as 3
	pq1.insert_with_priority(c1);							// add new node c1 at the end of object pq1
	c3->setPriority(2);						// Set the priority of c3 as 4
	pq1.insert_with_priority(c3);							// add new node c3 at the end of object pq1
	c4->setPriority(3);						// Set the priority of c4 as 2
	pq1.insert_with_priority(c4);							// add new node c4 at the end of object pq1
	c5->setPriority(4);						// Set the priority of c5 as 1
	pq1.insert_with_priority(c5);							// add new node c5 at the end of object pq1
	cout << "\ncPriorityQue after the adding Nodes along with priorities\n";
	pq1.print();							// Print the all the nodes
	pq1.get_highest_priority();							// remove the last node from pq1
	cout << "\ncPriorityQue after the removing Nodes along with priority\n";
	pq1.print();
	cout << "\n Front item in PriorityQue is:" << pq1.frontNode() << endl;
	cout << "\n Rear item in PriorityQue is:" << pq1.rearNode() << endl;
	return 0;
}