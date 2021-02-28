#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {	//constructer
	cout << "Cat created" << endl;
	happy = true;
}
Cat::~Cat() {	//destructer
	cout << "Cat destroyed" << endl;
	happy = true;
}
void Cat::speak() {
	if (happy) {
		cout << "Meouw!" << endl;
	}
	else {
		cout << "Ssssss" << endl;
	}
}