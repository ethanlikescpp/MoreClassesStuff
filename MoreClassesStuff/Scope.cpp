#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "mathstuff.h"

using namespace std;

void augment(int&);

int main() {
	cout << "2.3: Scope" << endl << "-------------------------------------" << endl;

	Person *pOne = new Person();
	Person *pTwo = new Person("Jane", "Doe");
	Person *pThree = new Person("James", "Mark", 23);

	Person p;
	Person &pRef = p;
	p.sayhello(); // Normal way to call the function
	pOne->sayhello(); // Using pointers to call the function
	pRef.sayhello(); // Using reference to call the function

	cout << "name of #1: " << pOne->returnname() << endl;
	cout << "name of #2: " << pTwo->returnname() << endl; // Use functions to display the data
	cout << "name of #3: " << pThree->returnname() << endl;
	cout << "first name of #2: " << pTwo->firstname() << endl;
	cout << "last name of #2: " << pTwo->lastname() << endl;
	pOne->setfirstname("Bob"); // Can only modify private values through public functions
	pOne->setlastname("James");
	pOne->setage(23);
	cout << "new name of 1: " << pOne->returnname() << endl;
	cout << "new age of 1: " << pOne->theirage() << endl;
	
	delete pOne, pTwo, pThree, p;

	// Just a pass by reference test
	int haha = 20;
	cout << "Value of haha was: " << haha << endl;
	augment(haha);
	cout << "Value of haha is now: " << haha << endl;

	return 0;
}

// &Int -> Void
// Takes a variable by reference and adds 10 to it
void augment(int &somenum) {
	somenum += 10;
}