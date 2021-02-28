#include <iostream>
#include <string>

using namespace std;


int main()

{

	//1. Loop through an array, using a pointer, with array element reference syntax

	//2. Loop through an array by incrementing a pointer

	//3. Loop through an array, breaking/stopping by comparing two pointers


	//1.

	string animals[] = { "monkey", "zebra", "kangaroo" };

	string *pAnimals = animals;


	//cout << sizeof(string) << endl;

	//cout << sizeof(animals) << endl;


	for (int i = 0; i < sizeof(animals) / sizeof(string); i++)

	{

		cout << pAnimals[i] << " " << flush;

	}


	cout << endl;
	
	//2.
		pAnimals = animals;

	for (int i = 0; i < sizeof(animals) / sizeof(string); i++)

	{

		cout << *pAnimals << " " << flush;

		pAnimals = pAnimals + 1;

	}


	cout << endl;


	//3.


	string *pAnimalsStart = &animals[0];

	string *pAnimalsEnd = &animals[2];


	while (true)

	{

		cout << *pAnimalsStart << " " << flush;

		if (*pAnimalsStart == *pAnimalsEnd)

		{

			break;

		}

		*pAnimalsStart++;

	}

	return 0;

}