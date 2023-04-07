// Search a File (Linear).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	const int ARRAYSIZE = 5;
	ifstream inFile;
	string fileName, line;
	int row, count;
	string product[ARRAYSIZE];
	double price[ARRAYSIZE];

	fileName = "ShopDetail.txt";

	inFile.open(fileName.c_str());

	if (inFile.fail())
	{
		cout << "The file cannot be OPENED" << endl;
	}

	row = 0;
	count = 0;

	while (getline(inFile,line,','))  //Special Algorithm
	{
		count++;

		if (count == 1)
		{
			product[row] = line;
		}

		else if (count == 2)
		{
			price[row] = atof(line.c_str());
			count = 0;
			row++;
		}
	}

	inFile.close();

	for (int x = 0; x < ARRAYSIZE; x++)
	{
		cout << product[x] << " " << price[x] << endl;
	}
	_getch();
	return 0;
}

