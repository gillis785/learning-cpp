#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	Cat mittens;

	/*mittens.happy = false; //set to true to say meouw false for Ssssss or */
	mittens.makeHappy();
	mittens.speak();
	mittens.jump();

	Cat midnight;

	midnight.makeSad();
	midnight.speak();
	midnight.jump();

	return 0;
}
