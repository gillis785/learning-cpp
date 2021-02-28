#include <iostream>
//char 0 -255

using namespace std;

int main() {

	bool bValue = true; //true =1 false=0 computer language
	cout << bValue << endl;

	char cValue = '7'; //shows 7 check ascii table to see char convertion 55 is Decimal 7 is the Char
	// put the value in single quotes '7' to get char can be -128 to 127
	cout << (int)cValue << endl; //(int) Casting a Char in int this will conver char to devimal value
	cout << "Size of char: " << sizeof(char) << endl; //char=1

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << "Size of char: " << sizeof(wchar_t) << endl; //wchar_t=2
	
	return 0;
}