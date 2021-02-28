#include <iostream>
#include <string>

using namespace std;

int main() {

	string text1 = "Hello "; 
	//string is a class and value text1 is and object int would be premitive type//
	string text2 = "Gilles";

	string text3 = text1 + text2;//concatenate (links) strings together another way of doing next line

	cout << text1 << text2 << endl;
	cout << text3 << endl;

	return 0;
}