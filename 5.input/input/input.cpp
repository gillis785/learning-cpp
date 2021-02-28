#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Enter your Name: " << flush; //flush for new line

	string input1;
	cin >> input1; //user input make sure to use >>

	cout << "You have entered: " << input1 << endl; //this will output whats user inserted

	cout << "Enter a number: " << flush;

	int value1; // you can also use int integer
	cin >> value1;

	cout << "You entered: " << value1 << endl;

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}