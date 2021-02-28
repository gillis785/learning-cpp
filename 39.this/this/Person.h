#include <iostream>
#include <sstream>
using namespace std;
#pragma once
class Person {
private:
	string name;
	int age;

public:
	Person();
	Person(string name, int age);
	string toString();
	
};

