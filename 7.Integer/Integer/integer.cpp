#include <iostream>
#include <limits> //climits or limits.h will work with mingw eclipse play around with the one that works for you

using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long long lValue = 2345325345345;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl; //shows the bits your using
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long long: " << sizeof(long long) << endl;

	unsigned int uValue = 2342343;
	cout << uValue << endl;

	return 0;
}