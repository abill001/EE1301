// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

#define MAX_NUM 10

using namespace std;

int main()
{
	int power;
	double num;
	do 
	{
		cout << "Please enter an integer between 1 and 10: ";
		cin >> power;
		cout << endl;
	} while (0 > power || power > MAX_POWER);
	
	cout << "Please enter a real number: ";
	cin >> num;

	double initialnum = num;
	for (int a = 1; a < power; a++)
		num *= initialnum;
	cout << "The value of the real number to the power of the integer is: " << num << endl;
	}

    return 0;
}


