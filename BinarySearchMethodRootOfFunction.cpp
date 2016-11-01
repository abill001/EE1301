// Midterm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double xmax, xmin, ymax, ymin, mid, y, previous_y = 0;
	cout << "Please enter xmax: ";
	cin >> xmax;
	cout << "Please enter xmin: ";;
	cin >> xmin;
	mid = (xmin + xmax) / 2;
	ymax = 5 * sin(xmax * 3) - 5 * cos(xmax / 3) + 4;
	ymin = 5 * sin(xmin * 3) - 5 * cos(xmin / 3) + 4;
	if (ymin > 0 || ymax < 0) {
		cout << "Invalid range ";
		return 0;
	}
	y = 5 * sin(mid * 3) - 5 * cos(mid / 3) + 4;
	while (fabs(y -previous_y) > 0.00001)
	{
		if (y > 0)
			xmax = mid;
		if (y < 0)
			xmin = mid;
		previous_y = y;
		mid = (xmin + xmax) / 2;
		y = 5 * sin(mid * 3) - 5 * cos(mid / 3) + 4;
	}
	cout << mid << endl;
	return 0;
}



