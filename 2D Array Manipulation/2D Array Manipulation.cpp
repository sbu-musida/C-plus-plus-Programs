// 2D Array Manipulation exam_Prep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

const int ROW = 4;
const int COL = 5;
const int ARRAYSIZE = (ROW * COL);

double calcAverage(int[ROW][COL]);


int _tmain(int argc, _TCHAR* argv[])
{
	int values[ROW][COL];
	int tempOne, tempTwo, num2search, indexRow,indexCol;
	bool hasFound;

	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)
		{
			cout << "Enter the value for Row " << x << " Column " << y << ": ";
			cin >> values[x][y];
		}
		cout << endl;
	}

	//Display the ARRAY
	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)
		{
			cout << values[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Perform bubble Sort on Each Row
	for (int x = 0; x < (COL - 1); x++)
	{
		for (int y = 1; y < COL; y++)
		{
			for (int z = 0; z < ROW; z++)
			{
				if (values[z][y] < values[z][y - 1])
				{
					tempOne = values[z][y];
					values[z][y] = values[z][y - 1];
					values[z][y - 1] = tempOne;
				}
			}
		}
	}

	//Display the ARRAY with each Sorted
	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)
		{
			cout << values[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Perform Bubble Sort On the WHOLE ARRAY
	int *arr_Pntr = &values[0][0];

	for (int x = 0; x < (ARRAYSIZE - 1); x++)
	{
		for (int y = 1; y < ARRAYSIZE; y++)
		{
			if (*(arr_Pntr + y) < *(arr_Pntr + (y - 1)))
			{
				tempTwo = *(arr_Pntr + y);
				*(arr_Pntr + y) = *(arr_Pntr + (y - 1));
				*(arr_Pntr + (y - 1)) = tempTwo;
			}
		}
	}

	//Display the entire Sorted ARRAY 
	for (int x = 0; x < ARRAYSIZE; x++)
	{
		cout << *(arr_Pntr + x) << " ";
	}
	cout << endl;
	cout << endl;


	for (int y = 0; y < ROW; y++)
	{
		for (int z = 0; z < COL; z++)
		{
			cout << values[y][z] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//Perform Search
	hasFound = false;

	cout << "Enter the value to search for ? ";
	cin >> num2search;

	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)
		{
			if (num2search == values[x][y])
			{
				hasFound = true;
				indexRow = x;
				indexCol = y;
				break;
			}
		}
	}

	if (hasFound)
	{
		cout << "The value was found at Row " << indexRow << " in Column " << indexCol << endl;
	}

	else
	{
		cout << "value NOT FOUND" << endl;
	}
	cout << endl;

	cout << "The average of the values in the 2D Array is " << calcAverage(values) << endl;


	_getch();
	return 0;
}

double calcAverage(int vals[ROW][COL])
{
	double ave, sum;
	sum = 0;
	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)
		{
			sum += vals[x][y];
		}
	}

	ave = sum / (ROW * COL);

	return ave;
}