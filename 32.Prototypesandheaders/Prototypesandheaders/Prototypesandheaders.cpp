#include <iostream>
#include "utils.h"

using namespace std;

int main() {
	doSomething();
	doSomething();
	

	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}
//Implementation
void doSomething() {
	cout << "Hello" << endl;

}