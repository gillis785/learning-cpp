#include <iostream>

using namespace std;

int main() {
	int values[] = {4, 7, 3, 4};
	cout << sizeof(values) << endl; //output 16 bytes, 4 bytes per integer
	cout << sizeof(int) << endl; // output 4 bytes per integer

	for (unsigned int i = 0; i < sizeof(values)/sizeof(int); i++) { //instead of using i < 4 // add unsigned int if errors

		cout << values[i] << " " << flush;
	}
}