// HW6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double nextRoot, previousRoot,function, root1, root2;
	//Loop to run the Newton Raphson method twice because we have two roots
	for (int i = 0; i < 2; i++) {
		//First time, our root is between 2 and 3 because f(x) switches sign, so the average initial root we start with is 2.5
		if (i == 0) {
			previousRoot = 2.5;
			//Initialize function
			function = -1.5*pow(previousRoot, 2) + 3 * previousRoot + 4;
		}
		//Second time, our root is betwwen -1 and 0, so the average initial root we start with is -0.5
		else {
			previousRoot = -0.5;
			//Initialize function
			function = -1.5*pow(previousRoot, 2) + 3 * previousRoot + 4;
		}
		//Newton Raphson loop
		while (function > 0.0001 || function < -0.0001) {
			nextRoot = previousRoot - (-1.5*pow(previousRoot, 2) + 3 * previousRoot + 4) / (-3 * previousRoot + 3);
			function = -1.5 * pow(nextRoot, 2) + 3 * nextRoot + 4;
			previousRoot = nextRoot;
		}
		//First time
		if (i == 0)
			root1 = nextRoot;
		//Second time
		else
			root2 = nextRoot;

	}
	cout << "The roots of the function -1.5x^2 + 3x + 4 are: " << root1 << " " << root2 << endl; 
    return 0;
}

