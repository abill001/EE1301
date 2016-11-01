// HW6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	//a)
	int isInputInvalid = 1, number, answer, guess = 0;
	//Numbers between 1 and 100, 50 is midway.
	int midrange = 50 , max = 100 , min = 1;
	cout << "Please input an integer between 1 and 100: ";
	cin >> number; 
	//While loop to let the user constantly input 
	while (isInputInvalid) {
		//Check if number is in range
		//1 and 100 inclusive 
		if (number > 100 || number < 1) {
			cout << "Please input valid number in range: ";
			cin >> number;
			continue; 
		}
		else {
			//Divide and Conquer approach
			//Always set guess to the min of the interval
			while (guess != number) {
				cout << "Is your number greater than or equal to " << midrange << " ? (1=yes, 0=no)";
				cin >> answer;
				if (answer == 1) {
					min = midrange;
					guess = min;
					midrange = min + (max - min) / 2;
				}
				else {
					max = midrange;
					guess = min;
					midrange = max - (max - min) / 2;
				}
			}
		}
		cout << "The number is: " << guess << endl;
		isInputInvalid = 0;
	}
    return 0;
}

/*
The jist of it : ...
while (min < max) {
	mid = (min + max)/2;
	cout << "greater than" << mid;
	cin >> answer;
	if (answer == "yes") 
	min = mid + 1;
	else 
	max = mid;
}
*/
