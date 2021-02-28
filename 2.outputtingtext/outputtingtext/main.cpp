#include <iostream> //input output stream

using namespace std; //Removes Explicit use of std::cout or std::endl...!!

int main()
{
	cout << "Starting Program... " << flush; //flush; doesn't create line feed, no next line
	cout << "Hello World!" << endl; //c output, prints Hello World, end line= flushes output and creates new line
	cout << "Banana, " << "Apple, " << "Orange" << endl; //outputs side by side
	cout << "This is a third line of code" << endl;

	return 0; //statement
}