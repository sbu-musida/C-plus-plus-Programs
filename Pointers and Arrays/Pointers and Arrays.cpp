// Pointers N Arrays 101.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	const int ARRAYSIZE = 10;
	int temp,values[ARRAYSIZE];

	for (int x = 0; x < ARRAYSIZE; x++)
	{
		cout << "Enter the value for element " << x + 1 << ": ";
		cin >> values[x];
	}

	int *arr_Pntr = &values[0];

	//Bubble Sort Method
	for (int x = 0; x < (ARRAYSIZE - 1); x++)
	{
		for (int y = 1; y < ARRAYSIZE; y++)
		{
			if (*(arr_Pntr + y) < *(arr_Pntr + (y - 1)))  //Put the * sign outside , to reference both arr_Pntr and y
			{
				temp = *(arr_Pntr + y);
				*(arr_Pntr + y) = *(arr_Pntr + (y - 1));
				*(arr_Pntr + (y - 1)) = temp;
			}
		}
	}

	//Display the sorted ARRAY
	for (int z = 0; z < ARRAYSIZE; z++)
	{
		cout << values[z] << " ";
	}

	_getch();
	return 0;
}

