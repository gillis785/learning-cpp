#include <iostream>
using namespace std;

void showMenu() {				//Defines function showMenu then run it by putting showMenu(); under int main to call it.
	cout << "1. Search" << endl;
	cout << "2. View Records" << endl;
	cout << "3. Quit" << endl;
}

int getInput() {
	cout << "Enter a selections: " << flush;

	int input;
	cin >> input;

	return input;
}

void processSelection(int option) {
	switch (option) {

	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}
}

int main() { //calling function

	showMenu();
	int selection = getInput();
	processSelection(selection);

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}