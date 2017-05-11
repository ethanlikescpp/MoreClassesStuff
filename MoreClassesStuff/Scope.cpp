#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "mathstuff.h"

using namespace std;

int main() {
	cout << "2.3: Scope" << endl << endl;
	Person something("John", "Doe");
	mathstuff somemath;
	
	cout << "2 to the power of 3: " << somemath.pow(2, 3) << endl;
	cout << "This person's name: " << something.returnname() << endl;
	
	return 0;
}