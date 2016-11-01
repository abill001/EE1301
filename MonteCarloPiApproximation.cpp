// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define NUM_TIMES 1000000

int main()
{
	double x,y, area, valueOfPie;
	int numInCircle = 0;
	srand(time(0));
	
	for (int counter = 0; counter < NUM_TIMES; counter++) {
		// RAND_MAX is the maximum random integer we get from the rand() function. Any random number we get will be <= RAND_MAX which means that x and y are random numbers between 0 and 1
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		// Checks if the point is in the area of the circle or not
		if (sqrt(x*x + y*y) <= 1)
			numInCircle++;
	}
	area = (double) numInCircle / NUM_TIMES;
	//Because it is a quarter circle:
	valueOfPie = area * 4.;
	cout << "Value Of Pie: " << valueOfPie << endl; 

    return 0;
}

