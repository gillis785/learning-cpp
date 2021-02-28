// Program that ask for user password untill it is correct

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	const string password = "Hello"; //const  constant meaning cannot change password value later on in program with const used again
	
	cout << "Enter password > " << flush;

	string input;
	cin >> input;

	while (input != password) {					//loop keep asking for correct password instead of using else
		cout << "Access Denied > " << endl;
		
		cout << "Enter password > " << flush;
		cin >> input;
	}

	cout << "Password Accepted " << endl;

	/*do {
		cout << "Hello" << endl;
	} while (value < 5);	//while needs to be after the }*/


	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}