//this is the second cpp file defining various functions to be used in main cpp file

#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
	cout << "Meouwww!!!" << endl;
}

void Cat::jump() {
	cout << "Jumping to the top of bookcase" << endl; // can also put the void lines in h file under };
}