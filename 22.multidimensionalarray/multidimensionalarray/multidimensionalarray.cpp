#include <iostream>
#include <string>

using namespace std;

int main() {

	string animals[][3] = { //inner and outer array
		{"fox", "dog", "cats"}, //inner
		{"mouse", "squirrel", "parrot"} //outer
	};
	for (int i = 0; i < 2; i++)	{
		for (int j = 0; j < 3; j++)	{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	   	  
	return 0;
}