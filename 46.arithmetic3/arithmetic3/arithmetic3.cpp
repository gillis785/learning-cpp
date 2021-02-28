#include <iostream>

using namespace std;


int main()

{

	//Convert to Hours

	int seconds1 = 56300; //seconds

	seconds1 /= 3600;

	cout << "56300 seconds converted to hours would approximately be: " << seconds1 << " hrs." << endl;


	int seconds2 = 90000;

	seconds2 /= 3600;

	cout << "90,000 seconds converted to hours would approximately be: " << seconds2 << " hrs." << endl;


	//Convert to Minutes

	int seconds3 = 1002;

	seconds3 /= 60;

	cout << "1002 seconds in minutes are: " << seconds2 << " mins." << endl;


	int seconds4 = 10902;

	seconds4 /= 60;

	cout << "10,902 seconds in minutes would approximately be: " << seconds4 << " mins." << endl;


	return 0;

}