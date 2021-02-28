#include <iostream>
#include <string>
using namespace std;
int main() {
	string value = "John";         //John was born
	cout << "value is " << value << endl;     // there is John somewhere
	cout << value << " lives at address " << &value << endl; // he lives somewhere
	string *address = {}; // Just a blank address that points to nowhere
	cout << "Blank adressbook : " << address << endl;
	address = &value; // His physical address is
	cout << "So we remembered his address " << address << endl;
		cout << "Bob came to see " << value << endl;
	*address += " Bob"; // Bob came to address of John
	cout << "Who now lives at address " << address << " : " << *address << endl;
	return 0;
}