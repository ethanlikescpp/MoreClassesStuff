#include "stdafx.h"
#include "mathstuff.h"

using namespace std;

int mathstuff::pow(int base, int exp) {
	int result = 1;

	for (int i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}