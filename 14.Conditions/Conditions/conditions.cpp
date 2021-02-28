#include <iostream>

/*
	== equality test
	!= not equals
	< less then
	> greater then
	<= less than or equal to
	>= greater than or equal to
	|| If condition1 is true, condition 2 and 3 will NOT be checked
	| This will check conditions 2 and 3, even if 1 is already true
*/

using namespace std;

int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 5) {
		cout << "Condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 <= 3) { // && both of these need to be right to be true //single & bitwise double && logical double || or single | bitwise or
		cout << "Condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 <= 3) { // || only one needs to be right to be true
		cout << "Condition 3: true" << endl;
	}
	else {
		cout << "Condition 3: false" << endl;
	}

	if (value2 != 8 && value1 == 10 || value1 < 10) { // try not to use != in your code unless you need too don't do this type of code too confusing
		cout << "Condition 4: true" << endl;
	}
	else {
		cout << "Condition 4: false" << endl;
	}
	// instead code this way
	bool condition1 = (value2 != 8) && (value1 == 10); //bool will output 1 or 0 for true or false if you cout these
	cout << condition1 << endl;
	bool condition2 = value1 < 10;
	cout << condition2 << endl; // you can remove the cout when if and else is added

	if (condition1 || condition2) { 
		cout << "Condition 5: true" << endl;
	}
	else {
		cout << "Condition 5: false" << endl;
	}

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}