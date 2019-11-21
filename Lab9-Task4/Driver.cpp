#include <iostream>
#include "joylandRide.h"
using namespace std;

const int turns = 5;
int totalRiders = 18;
int main()
{
	joylandRide ride[turns];
	int numOfRiders;
	int option;
	do {
		cout << "Choose one of the following option: " << endl;
		cout << "1. To Add Riders in Ride" << endl;
		cout << "2.	To start the Ride" << endl;
		cout << "3.	To Get Total Riders in current Ride" << endl;
		cout << "4.	To Exit " << endl;
		cout << "Please choose a option: ",
			cin >> option;
		int i = 0, j = 0, k = 0, remainder=0;
		switch (option) {
		case 1: {

			cout << "Enter Number of Riders to Ride" << endl;
			cin >> numOfRiders;
			for (i=0; i < turns; i++) 
			{
				if ((ride[i].getCount() + numOfRiders) >= 18)
				{
					remainder= (ride->getCount() + numOfRiders) - 18;

					cNode * rptr;
					for (int n = 0; n < remainder; n++)
					{
						rptr = ride[i].deQue();
						ride[i + 1].enQue(rptr);
					}
				}
				for (j = 0; j < numOfRiders; j++) {
					cNode* ptr = new cNode();
					ride[i].enQue(ptr);
					if (ride[i].getCount() == totalRiders) break;
				}
				numOfRiders = numOfRiders - (j + 1);
				if (numOfRiders + 1 == 0) break;
			}
		}
				break;

		case 2: {

			if (ride[k].getCount() == totalRiders) {
				cout << "Ride Started be careFull" << endl;
				i++;

			}
			else {
				cout << "Ride Not Started. There are Not enough Riders" << endl;
			}
		}
				break;
		case 3: {
			cout << "Riders are: " << ride[k].getCount() << endl;
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