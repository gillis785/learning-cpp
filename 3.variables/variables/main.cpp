//Short lines are also called strings of code
#include <iostream> //input output stream

using namespace std; //Removes Explicit use of std::cout or std::endl...!!

int main()
{
	int numberCats = 5; //int=interger=allocating memory, variable name you give no space or use _ , vlaue
	int numberDogs = 3;
	int numberAnimals = numberCats + numberDogs; //if you did it this way you can do the second method

	cout << "Number of cats: " << numberCats << endl; //adds variable value to the text. no quotes""
	cout << "Number of dogs: " << numberDogs << endl;
		
	// cout << "Total number of animals: " << numberCats + numberDogs << endl; // add both numbers together or
	cout << "Total number of animals: " << numberAnimals << endl;
	cout << "New dog aquired " << endl;

	numberDogs = numberDogs + 1; //adds another value of dogs

	cout << "New number of dogs: " << numberDogs << endl; //prints new value
	cout << "New number of animals: " << numberCats + numberDogs << endl; //can't use numberAnimals here

	return 0;
}