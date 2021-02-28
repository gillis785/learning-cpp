#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
	Person();
	string toString();
	void setName(string newName);
	string getName();
private:
	string name;
};

