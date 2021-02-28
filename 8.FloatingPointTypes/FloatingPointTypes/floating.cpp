#include <iostream>
#include <iomanip> //needed for setprecision and fixed

using namespace std;

int main() {
	float fValue = 123.456789; //float allocates fixed size of memory

	cout << "Size of float: " << sizeof(float) << endl; // shows using 4 bytes will show 4 numbers after 76.4
	cout << setprecision(20) << fixed << fValue << endl; 
	//setprecision number you want to show after 76.40000 which is garbage fixed or scientific

	double dValue = 123.456789;
	cout << setprecision(20) << fixed << dValue << endl; //double less garbage digits

	long double lValue  = 123.456789876543210;
	cout << setprecision(20) << fixed << lValue << endl; //double long more precision
	cout << "Size of long double: " << sizeof(lValue) << endl; // shows using 8 bytes will show 12 in eclipse gcc
	return 0;
}