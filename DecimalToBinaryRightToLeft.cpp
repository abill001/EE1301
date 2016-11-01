// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>


using namespace std;


int main()
{
	int decimal, maxpower = 0;
	cout << "Please input an integer number (Will work for numbers with max 8 digits, some with 9 digits and 10 digits) : " << endl;
	cin >> decimal;

	//This while loop is handy in the sense that it helps me determine the number of digits my binary number will have based on the minimum power of 2 that is greater than the number of given
	// For example, if the decimal given is 15, then maxpower is 4 because 2^4 = 16 > 15
	while (decimal - pow(2, maxpower) > 0) {
		maxpower++;
	}
	// For binary numbers, the first digit alternates between 0 and 1 with a period of 2
	// The second digit alternates between 0 and 1 with a period of 2^2
	// The third digit alternates between 0 and 1 with a period of 2^3 ... and so on
	// This is what I used to convert the number to binary, I divided the number by increments of power of 2 starting with 2^1, if the remainder is in the lower bound (between 0 and (power of 2)/2), then the corresponding digit is 0, otherwise 1
	for (int counter = 1; counter <= maxpower + 1; counter++) {
		int remainder = decimal % (int)pow(2, counter); 
		//If we write binary numbers in ascending order, we notice a patern : For the first digit (0,1,0,1,0,1 ...) - For the second digit (0,0,1,1,0,0,1,1 ...) and so on. This can be written as the following
		if (remainder >= (int)pow(2, counter) / 2 && remainder < (int)pow(2, counter)) {
			cout << 1 << endl;
		}
		else if (remainder >= 0 && remainder < (int)pow(2, counter) / 2) {
			//This if statement is to take into account the fact that when counter reaches maxpower + 1, remainder will always be the number itself and will be in the lower bound and we do not need an extra 0 
			if (counter != maxpower + 1) 
				cout << 0 << endl;	
		}
	}

	/*
	while (number > 0)
{
            cout << number % 2 << endl;
            number /= 2;
}
	*/
    return 0;
}


