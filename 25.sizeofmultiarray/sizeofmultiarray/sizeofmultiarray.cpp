#include <iostream>
#include <string>

using namespace std;

int main() {
	string animals[][3] {
		{"fox", "dog", "cats"},
		{"mouse", "squirrel", "parrot"}
	};

	for (unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	/*cout << sizeof(animals[0]) << endl; //check how many bytes used, (string), animals, or by row (animals[0]) or [1]*/

	return 0;
}