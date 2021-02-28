#include <iostream>
#include <string> //needed for string to work

using namespace std;

int main() {

	cout << "1.\tAdd new record." << endl; //\t add tap spacing between # and txt
	cout << "2.\tDelete record." << endl;
	cout << "3.\tSearch record." << endl;
	cout << "4.\tView record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value < 3)	{ //so if you use 2 and under you will get the msg
		cout << "Insufficient privileges to uses these menu options." << endl;
	}
	else { //3 and up will give you this msg 
		cout << "Access Granted." << endl;
	}

	if (value == 5) { //this will give msg use double == for checking
		cout << "Exiting Program." << endl;
	}
	else { //3 and up will give you this msg 
		cout << "Not exiting." << endl;
	}

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}