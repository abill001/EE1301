// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
#define MAX_NUM 20

int main()
{
	long long int n, initialn; 
	cout << "Please enter a positive integer number n <= 20 : ";
	cin >> n;
	while (n > MAX_NUM || n < 0) {
		cout << "Please enter a valid value for the positive integer n <= 20: ";
		cin >> n;
	}
	//The program doesn't work for all numbers
	initialn = n;
	// Multiplies the current value of n by the int right below n until initialn - counter = 1
	for (int counter = 1; counter < initialn; counter++)
		n *= (initialn - counter);
	cout << "The factorial of n is: " << n << endl;
	// To account for 0! = 1 ; Factorials of negative numbers don't exist so we don't take them into consideration
	else if (n == 0)
		cout << "The factorial of n is: " << 1 << endl;
	
    return 0;
}


