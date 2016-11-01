// HW6(console).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

#define SIZE 20

using namespace std;

int main()
{
	int A[SIZE], n;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	while (1)
	{
		bool isInArray = false;
		cout << "Please enter an integer value between 0 and 99\n" << "If you wish to exit the program, enter - 1\n";
		cin >> n;
		if (n == -1)
			break;
		for (int i = 0; i < SIZE; i++) 
		{
			if (A[i] == n) 
			{
				cout << n << " is in the array" << endl;
				isInArray = true;
				break;
			}
		}
		if (!isInArray)
			cout << n << " is not in the array" << endl;
	}
    return 0;
}

