// HW6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, polynomial, previousPolynomial = 0;
	int factorial = 1, coefficient = -1, i = 1, j =1; //coefficient used to determine whether addition or substraction, factorial meant to save value resulting of j loop
	cout << "Please enter a real number x: ";
	cin >> x;
	polynomial = x; //To account for x in x - x^3/3! ...
	int epsilon = fabs(previousPolynomial - polynomial);
	//Keep on summing terms until epsilon is less than or equal to 0.00001
	while (epsilon > 0.00001 ) {
		i++;
		if (i % 2 == 0)
			continue;
		else {
			for (j; j <= i; j++) {
				factorial *= j;
			}
			//Accumulate
			polynomial += coefficient * pow(x, i) / factorial;
			//Switch Sign
			coefficient *= -1;
			//Calculate the resolution
			epsilon = fabs(polynomial - previousPolynomial);
			previousPolynomial = polynomial;
		}
	}
	polynomial = (int)(polynomial * 100000) / 100000.;
	cout << polynomial << endl;
    return 0;
}

