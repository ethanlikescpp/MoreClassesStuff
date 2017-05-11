// EdX Intermediate C++ Course Part 2
// 2.1: Splitting Classes

#include "stdafx.h"
#include <iostream>
#include "mathstuff.h"
#include "Person.h"

using namespace std;

class Prices {
public:
	double price, yield; // Variable declarations come first
	Prices() {
		cout << "This will also be printed automatically" << endl;
		price = 0; // Can initialize the variables in here
		yield = 0;
	}
};

class Stock {
public:
	Stock() {
	};
	Prices yesterday, today;

	// Stock -> Double
	// Returns the stock price prediction of the next day, linearly
	double prediction() { // This is called a "method"
		double rate = today.price / yesterday.price;
		return rate * today.price;
	}
};

// Put function declarations below the classes!
// Otherwise you won't be able to declare functions with respective classes in them!

//double prediction(Stock&);

// Void -> Int
// The main function of this program
int main() {
	cout << "PART 2.1: SPLITTING CLASSES" << endl;
	int base1 = 2;
	int exp1 = 2;
	cout << "power is: " << pow(base1, exp1) << endl;

	cout << endl << "PART 2.2: CONSTUCTORS AND DECONSTRUCTERS" << endl;

	Stock msft;
	msft.yesterday.price = 101.5;
	msft.yesterday.yield = 0.02;
	msft.today.price = 105.3;
	msft.today.yield = 0.01;

	cout << "Microsoft's price yesterday: " << msft.yesterday.price << endl;
	cout << "Microsoft's divedend yesterday: " << msft.yesterday.yield << endl;
	cout << "Microsoft's price today: " << msft.today.price << endl;
	cout << "Microsoft's divedend today: " << msft.today.yield << endl;

	double tomorrowprice = msft.prediction();

	cout << "Predicted price for tomorrow: " << tomorrowprice << endl;

	Stock *pAmd = new Stock();
	
	

    return 0;
}

