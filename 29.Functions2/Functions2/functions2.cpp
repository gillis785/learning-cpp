#include <iostream>
using namespace std;
void displayMenu() {
	cout << "1. Billie Jean" << endl;
	cout << "2. Love on Top" << endl;
	cout << "3. Attention" << endl;
	cout << "4. Scroll down" << endl;
	cout << "5. Quit." << endl;
}
void showResponse() {
	unsigned short input;
	cin >> input;
	switch (input) {
	case 1:
		cout << "Playing Billie Jean" << endl << "By Michael Jackson" << endl;
		break;
	case 2:
		cout << "Playing Love on Top" << endl << "By Beyonce" << endl;
		break;
	case 3:
		cout << "Playing Attention" << endl << "By Charlie Puth" << endl;
		break;
	case 4:
		cout << "Scrolling" << endl;
		break;
	case 5:
		cout << "Closing application." << endl;
		break;
	default:
		cout << "ERROR." << endl << "PLEASE TYPE A VALID INPUT" << endl;
	}
}
int main() {
	displayMenu();
	cout << "Enter selection --> " << flush;
	showResponse();
	
	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}