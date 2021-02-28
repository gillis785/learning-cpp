//Break and Continue

#include <iostream>
#include <string>
#include <iomanip>
//!= does not match

using namespace std;

/* break ...

int main() {
	for (int i = 0; i < 5; i++) {
		cout << "i is: " << i << endl;

		if (i == 3) {
			break;
		}

		cout << "Looping ..." << endl;
	}
	
	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}
	*/

/* continue ...

int main() {
	for (int i = 0; i < 5; i++)	{
		cout << "i is: " << i << endl;

		if (i == 3) {
			continue;
		}

		cout << "Looping ..." << endl;
	}

	cout << "Program quitting..." << endl;

*/
//Program using for loop to ask for password until correct
int main() {
	const string password = "Hello"; //const  constant meaning cannot change password value later on in program with const used again

	string input; //declare a string to get input

	do {
		cout << "Enter password > " << flush; //user enters the password
		cin >> input; //gets password

		if (input == password) {
			break;
		}
		else {
			cout << "Access Denied." << endl;
		}	

	} while (true);

	cout << "Password Accepted " << endl; 
	cout << "Program quitting..." << endl;

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}