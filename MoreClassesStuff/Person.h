// Use the header file to declare objects and member functions of the class

#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string firstName;
	string lastName;
	int age;

public:
	Person();

	Person(string fName, string lName);
	Person(string fName, string lName, int age);
	string returnname();

	~Person();
};