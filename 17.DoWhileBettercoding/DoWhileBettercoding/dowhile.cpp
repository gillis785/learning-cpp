// Program that ask for user password untill it is correct

#include <iostream>
#include <string>
#include <iomanip>
//!= does not match

using namespace std;

int main() {

	const string password = "Hello"; //const  constant meaning cannot change password value later on in program with const used again

	string input; //declare a string to get input
	
	do	{
		cout << "Enter password > " << flush; //user enters the password
		cin >> input; //gets password

		if (input != password) { 
			cout << "Access Denied." << endl;

		}	// checks if password is wrong

	} while (input != password);					//loop keep asking for correct password instead of using if and else
		cout << "Password Accepted " << endl; // checks if password is correct
		cout << "Program quitting..." << endl;
		
	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}