// HW4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

#define SEED_VALUE 1

int main()
{
	long long int previousValue2 = SEED_VALUE, previousValue1 = SEED_VALUE, currentValue;
	cout << "First 100 Fibonnaci numbers: " << endl;
	for (int i = 0; i < 100; i++) {
		// For the first two iterations of the loop, print 1, 1
		if (i == 0 || i == 1)
			cout << SEED_VALUE << endl;
		else {
			currentValue = previousValue1 + previousValue2;
			cout << currentValue << endl;
			previousValue2 = previousValue1;
			previousValue1 = currentValue;
		}
	return 0;
}
