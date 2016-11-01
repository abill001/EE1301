// Midterm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int primeChecker(int n)
{
	int counter = 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			counter++;
	}
	if (counter > 0)
		return 0;
	else
		return 1;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (primeChecker(j) == 0)
				continue;
			else
			{
				int temp = i;
				if (temp % j == 0)
				{
					temp /= j;
					if (primeChecker((int)temp) == 1) {
						cout << i << endl;
						break;
					}
					else
						break;
				}
			}
		}
	}
	return 0;
}



