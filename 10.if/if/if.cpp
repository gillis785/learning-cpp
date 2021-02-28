#include <iostream>
#include <string> //need for string to work

using namespace std;

int main() {

	string password = "Hello"; //single = signing the password or value

	cout << "Enter Password > " << flush;

	string input;
	cin >> input;
	
	if(input == password) { //check if password matches double == checking password or value
		cout << "Password accepted." << endl; //matches
	}

	if (input != password) { // doesn't match != not
		cout << "Access denied." << endl;
	}

	// cout << "'" << input << "'" << endl; // "'" will put input in single quotes example

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}