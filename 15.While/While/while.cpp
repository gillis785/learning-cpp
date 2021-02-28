#include <iostream>

using namespace std;

int main() {

	int i = 0;

	while (i < 5) {  //if you would put while (true) would result in infinite loop printing Hello
		cout << "Hello" << i << endl; // this will loop till it reaches 5 then Program exiting.
		i++; //is the shorter way of writing i = i + 1; // increases increments i by 1
	}

	cout << "Program exiting." << endl;

	return 0;
}