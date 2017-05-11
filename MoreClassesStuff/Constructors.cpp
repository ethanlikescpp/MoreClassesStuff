#include "stdafx.h";

#include <iostream>
#include <string>

using namespace std;

class Person {
	string firstName;
	string lastName;
	int age;
public:
	Person() {
	}
	Person(string fName, string lName) {
		string firstName = fName;
		string lastName = lName;
	}
	Person(string fName, string lName, int age) {
		string firstName = fName;
		string lastName = lName;
		int age = age;
	}
	string givename() {
		return firstName + " " + lastName;
	}
	int giveage() {
		return age;
	}
	~Person();
};



int main() {
	Person *someone = new Person("John", "Doe");
	Person someoneelse("Bob", "James", 45);

	cout << "someone's name is: " << *someone.givename() << endl;

	delete someone;

	return 0;
}