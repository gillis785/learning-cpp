#include <iostream>
#include <string>

using namespace std;

int main() {
	const int NSTRINGS = 5;

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" }; // 0, 1, 2, 3, 4

	string *pTexts = texts;

	pTexts += 3; //chooses nstring value so "four"

	cout << *pTexts << endl;

	pTexts -= 2; //this should choose "two"

	cout << *pTexts << endl;

	string *pEnd = &texts[NSTRINGS-1]; //-1 removed "five" to display remove -1 to have all display
	pTexts = &texts[0]; // starts back at beginning so "one" but -1 so no "five" will display

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
}

	// Set pTexts back to start.

	pTexts = &texts[0];
	long elements = (long)(pEnd - pTexts);
	cout << elements << endl; // will display how many values in array

	// Set pTexts back to start.

	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;

	return 0;
}