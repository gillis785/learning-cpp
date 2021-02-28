//Make a Multiplication table with multidimensional array
#include <iostream>
#include <string>

using namespace std;

int main() {

int numberTable[12][12] = {};

//set values
for (int i = 0; i < 12; i++) {
	for (int j = 0; j < 12; j++) {
		numberTable[i][j] = (i + 1) * (j + 1);
	}
}
//print values
for (int i = 0; i < 12; i++) {
	for (int j = 0; j < 12; j++) {
		cout << numberTable[i][j] << " \t" << flush;
	}
	cout << endl;
}
	return 0;
}