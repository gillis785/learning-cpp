#include<iostream>
#include<string>


using namespace std;


int main()

{

	int menu = 4;

	int a, b, c;


	cout << "1. Addition. " << endl;

	cout << "2. Subtraction. " << endl;

	cout << "3. Multiplication. " << endl;

	cout << "4. Division. " << endl;


	cout << endl;



	while (menu)

	{

		cout << endl;

		cout << "Select any operation to be examined " << endl;

		cin >> menu;

		cout << endl;


		switch (menu)

		{

			//Addition

		case 1:

			cout << "Enter two Digits for Addition " << flush;

			cin >> a >> b;

			c = a + b;

			cout << c;

			cout << endl;

			break;

		case 2:

			cout << "Enter two digits for subtraction. " << flush;

			cin >> a >> b;

			c = a - b;

			cout << c;

			cout << endl;

			break;


		case 3:

			cout << "Enter two digits for Multiplication. " << flush;

			cin >> a >> b;

			c = a * b;

			cout << c;

			cout << endl;

			break;


		case 4:

			cout << "Enter two digits for Division. " << flush;

			cin >> a >> b;

			c = a / b;

			cout << c;

			cout << endl;

			break;


		default:

			cout << "Invalid Selection. " << endl;

			break;

		}

	}

	cin.ignore();
	cin.get();
	/*system("pause"); //I use this visual studio to get the console...Not important*/

	return 0;


}