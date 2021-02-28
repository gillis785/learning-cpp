#include <iostream>
#include <iomanip> //for set

using namespace std;

int main() {

	float value1 = 1.1; // like asking someone if there the same height, will never be accurate

	if (value1 == 1.1) { // try to use < or > instead of ==
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}
	cout << setprecision(10) << value1 << endl; //setw puts 10 spaces before value, setprecision will show precision of number

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}