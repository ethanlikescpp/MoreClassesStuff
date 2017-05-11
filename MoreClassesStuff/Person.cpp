// Here you actually write the objects and functions you've declared in the header

#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person() {
}

Person::Person(string fName, string lName) {
	firstName = fName;
	lastName = lName;
}

Person::Person(string fName, string lName, int age) {
	firstName = fName;
	lastName = lName;
	age = age;
}

Person::~Person() {
}

string Person::returnname() {
	return firstName + " " + lastName;
}