#include <iostream>

using namespace std;


int main() {

	int numArray[13] = {};
	int i;
	
	for (i = 0; i < 13; i++) {

		numArray[i] = i * 12;
		cout << "12 X " << i << " = " << numArray[i] << endl;
	}

	return 0;
}