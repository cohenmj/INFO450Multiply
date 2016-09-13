// INFO450Multiply.cpp 
// INFO 450 Assignment #1
// Michael Cohen


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int row;								
	int colEntry;		//count variables		
	int i = 0;
	int value;	
	
	cout << "Multiplication tables:" << endl;
	cout << "0    0   1   2   3   4   5   6   7   8   9  10" << endl;
	cout << "   0   0   0   0   0   0   0   0   0   0   0   0 " << endl;
	
	for(row = 1; row < 11; row++)
	{
		printf(" %3d   0 ", row);
		for (colEntry = 1; colEntry < 11; colEntry++)
		{
			value = row * colEntry;
			printf(" %2d ", value);
		}
		cout << endl;
	}

    return 0;
}

