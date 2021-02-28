#include <iostream>
#include <iomanip>
#include <string> //needed for string to work

using namespace std;

int main() {

	cout << "1.\tAdd new record." << endl; //\t add tap spacing between # and txt
	cout << "2.\tDelete record." << endl;
	cout << "3.\tSearch record." << endl;
	cout << "4.\tView record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush; //flush no new line

	int value;
	cin >> value;

	if (value == 1) { //first one is if the rest of menu will be if else
		cout << "Adding new record..." << endl;
	}
	else if (value == 2) {
		cout << "Deleting record..." << endl;
	}
	else if (value == 3) {
		cout << "Searching record..." << endl;
	}
	else if (value == 4) {
		cout << "View record..." << endl;
	}
	else if (value == 5) {
		cout << "Exiting..." << endl;
	}

	else { //if you choose a number that ain't there you will get this msg
		cout << "Invalid Option." << endl;
	}
		
	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}