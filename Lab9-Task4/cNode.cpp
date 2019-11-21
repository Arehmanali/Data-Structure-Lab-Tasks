#include "cNode.h"
#include<iostream>
#include<fstream>
using namespace std;
/*Definition of cNode default constructor for defaulting the data members*/
cNode::cNode()
{
	next = NULL;
	data = 0;
}
/*Definition of Parametrized Constructor */
cNode::cNode(int d)
{
	data = d;
	next = NULL;
}

/*Definition of getting Function for returning data */
int cNode::getData() { return data; }

/* Definition of Setter Function for setting data */
void cNode::setData(int d) {
	this->data = d;
}

/*Definition of print function for output data on console*/
void cNode::print()const {
	cout << "Data is :" << data << endl;
}
