// Here you actually write the objects and functions you've declared in the header
// Variable types are also declared in the header file, not here

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

void Person::sayhello() {
	cout << "Hello World!" << endl;
}

string Person::firstname() {
	return firstName;
}

string Person::lastname() {
	return lastName;
}

int Person::theirage() {
	return age;
}

void Person::setfirstname(string inputfname) {
	this->firstName = inputfname;
}

void Person::setlastname(string inputlname) {
	this->lastName = inputlname;
}

void Person::setage(int agenum) {
	this->age = agenum;
}