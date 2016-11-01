// HW4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double xmin, xmax , y, numOfRoots = 0, previousy; 
	cout << "Please enter a value for xmin: ";
	cin >> xmin;
	cout << "Please enter a value for xmax: ";
	cin >> xmax;
	double x = xmin;
	for (; x <= xmax; x += 0.0001) {
		y = 1.2*sin(x) - 1.5*cos(3*x);
		if ((y > 0 && previousy < 0) || (y < 0 && previousy > 0)) {
			numOfRoots++;
			cout << "Root: " << x << endl; 
		}
		previousy = y;
	}

	cout << "The number of roots for the interval [" << xmin << "," << xmax << "] is: " << numOfRoots << endl;
	return 0;
}

