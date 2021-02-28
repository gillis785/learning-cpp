// Switch statement similar to if , else, else if
#include <iostream>

using namespace std;

int main() {
	int value = 5;

	switch (value) {
		case 4:
			cout << "Value is 4." << endl;
			break;
		case 5:
			cout << "Value is 5." << endl;
			break;
		case 6:
			cout << "Value is 6." << endl;
			break;
	default:
		cout << "Unrecongnized value." << endl;
	}

	return 0;
}