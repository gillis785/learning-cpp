#include <iostream>
#include <string>

using namespace std;

int main() {
	char text[] = "hello";

	cout << text << endl; // will display hello

	for (int i = 0; i < sizeof(text); i++) {
		cout << i << ": " << text[i] << endl; //displays array numbers and letters one by one
	}

	//starts loop
	
	int k = 0;

	while (true) {
		if (text[k] == 0)
			break;
		cout << text[k] << flush;
		k++;
	} //will print hello again

	return 0;
}