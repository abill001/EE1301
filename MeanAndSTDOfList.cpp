// HW6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	//The accuracy of this problem is limited due to the error in reading the values from the text file.
	ifstream myFile ;
	double coordinate, xMean = 0, yMean = 0, xSTD = 0, ySTD = 0;
	int order = 0;
	int numOfCells;
	myFile.open("hw6_p1_data.txt");
	//First while loop to get the xMean and yMean
	if (myFile.is_open()) {
		while (myFile.good()) { // or while (!myFile.eof())
			myFile >> coordinate;
			if (!myFile.eof())
				break;
			if (order % 2 == 0)
				xMean += coordinate;
			else 
				yMean += coordinate;
			order++;
		}
		//numOfCells is equal to the number of x elements and y elements each
		numOfCells = order / 2;
		xMean /= numOfCells;
		yMean /= numOfCells;
		myFile.close();
	}
	order = 0; 
	myFile.open("hw6_p1_data.txt");			//or myFile.seekg (0,myFile.beg);
	//Second while loop to get xSTD, ySTD
	if (myFile.is_open()) {
		while (myFile.good()) {
			myFile >> coordinate;
			if (!myFile.eof ())
				break;
			if (order % 2 == 0) {
				xSTD += pow(coordinate - xMean, 2);
			}
			else {
				ySTD += pow(coordinate - yMean, 2);
			}
			order++;
		}
		xSTD = sqrt(xSTD / numOfCells);
		ySTD = sqrt(ySTD / numOfCells);
		myFile.close();
	}
		cout <<"xMean = " << xMean << " yMean = " << yMean << endl;
		cout << "xSTD = " << xSTD << " ySTD = " << ySTD << endl;
	
    return 0;
}

