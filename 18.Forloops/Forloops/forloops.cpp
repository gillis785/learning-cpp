//for Loop

#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 10; i++)	{  //(starts loop at 0 ; how many times loop goes till it stops ; increments by 1)
		cout << "Hello " << i << endl; // i adds the number to see that its working
	}
	cin.ignore(); //prevents console from closing
	cin.get(); //press key again and it closes

	return 0;
}