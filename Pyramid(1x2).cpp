// HW6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;
//If we want the user to input a specific dimension for the pyramid, just cin >> these values
//Note this program will only print a pyramid where num_of_rows = num_of_columns /2, even if values given do not fit that criterion, the program adjusts the number of rows to satisfy this condition
#define NUM_OF_COLUMNS 20
#define NUM_OF_ROWS 10

int main()
{
	int star_count = 0;
	//i loop for printing each row
	for (int i = 0; i < NUM_OF_ROWS; i++) {
		//j loop for printing the column elements of each row
		for (int j = 0; j < NUM_OF_COLUMNS; j++) {
			//To check where to start printing stars
			if (j < (NUM_OF_COLUMNS / 2 - 1) - i || j >= (NUM_OF_COLUMNS / 2 + 1) + i)
				cout << " ";
			else {
				cout << "*";
				star_count++;
			}
		}
		//Go to the next line for next row
		cout << endl;
		//check if pyramid is complete
		if (star_count == NUM_OF_COLUMNS)
			break;
		//Reset star_count;
		else
			star_count = 0;
	}
    return 0;
}

