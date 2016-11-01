// HW6(console).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define SIZE_NUMS 15
#define NUM_OF_INPUTS 3

using namespace std;


int main()
{
	int nums[SIZE_NUMS] = {10,20,30,40,50,60,70,80,90,100}, n, numCount = 10;
	//Repeats for as many inputs, NUM_OF_INPUTS must be less than 6
	for (int i = 0; i < NUM_OF_INPUTS; i++) 
	{
		cout << "Please enter a number: ";
		cin >> n;
		//Search for index where n will be inserted
		for (int j = 0; j < numCount; j++) 
		{
			if (nums[j] >= n) 
			{
				//Shift cells up
				for (int currentIndex = numCount - 1; currentIndex >= j; currentIndex--)
				{
					int nextIndex = currentIndex + 1;
					nums[nextIndex] = nums[currentIndex];
				}
				//Replace by new value n;
				nums[j] = n;
				//Increase numCount of array nums
				numCount++;
				break;
			}
		}
	}
	//Print sorted array:
	for (int i = 0; i < numCount; i++) 
	{
		cout << nums[i] << " ";
	}
	cout << endl;
    return 0;
}

