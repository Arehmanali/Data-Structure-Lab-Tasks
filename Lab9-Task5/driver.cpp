#include <iostream>
#include "cPriorityQue.h"
using namespace std;

const int SIZE = 5;
int COUNTER = 18;
int main()
{
	cPriorityQue q1[SIZE];
	int numOfRiders;
	int priority;
	int option;
	int i = 0, j = 0, k = 0;
	do {
		cout << "Choose one of the following option: " << endl;
		cout << "1. To Add Riders in Ride" << endl;
		cout << "2.	To start the Ride" << endl;
		cout << "3.	To Get Total Riders in current Ride" << endl;
		cout << "4.	To Exit " << endl;
		cout << "Please choose one option: ",
		cin >> option;
		switch (option) {
		case 1: {
			int m = 0;
			cout << "Enter number of riders" << endl;
			cin >> numOfRiders;
			cout << "Enter priority 1 if VIP family otherwise 0" << endl;
			cin >> priority;
			for (; i < SIZE; i++) {

				if ((q1[i].getCount() + numOfRiders) >= 18 && (priority == 1))

				{
					m = (q1->getCount() + numOfRiders) - 18;

					cNode * rptr;
					for (int n = 0; n < m; n++)
					{
						rptr = q1[i].get_highest_priority();
						q1[i + 1].insert_with_priority(rptr);
					}

				}
				for (j = 0; j < numOfRiders; j++) {
					cNode* ptr = new cNode();
					ptr->setPriority(priority);
					q1[i].insert_with_priority(ptr);
					if (q1[i].getCount() == COUNTER) break;
				}
				numOfRiders = numOfRiders - (j + 1);
				if (numOfRiders + 1 == 0) break;
			}
		}
				break;

		case 2: {

			if (q1[k].getCount() == COUNTER) {
				cout << "Ride Started" << endl;
				k++;
			}
			else {
				cout << "Ride Not Started. Because Not enough Riders" << endl;
			}
		}
				break;
		case 3: {
			cout << "The number of riders in the current ride is " << q1[k].getCount() << endl;
		}
				break;
		case 4:
		{
			break;
		}
		}
	} while (option != 4);

	return 0;
}