#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting Program..." << endl;
	{
		Cat mittens;
		mittens.speak(); //these {} aren't neccessary but will make cat destroyed print before ending program
	}
	cout << "Ending Program..." << endl;

	return 0;
}