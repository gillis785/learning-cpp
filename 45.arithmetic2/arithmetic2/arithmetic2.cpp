#include <iostream>


using namespace std;


int main()

{

	for (int i = 0; i <= 10001; i++)

	{

		if (i % 100 == 0)

			/*If i reaches a number that when it divides by 100, there is no remainder meaning it is cleanly divided by 100, C++ will input a dot. Output will have a line of ................. In case anyone was wondering why this is the answer :) James would be way better at explaining, forgive me!

			*/

		{

			cout << "." << flush;

		}

	}

}