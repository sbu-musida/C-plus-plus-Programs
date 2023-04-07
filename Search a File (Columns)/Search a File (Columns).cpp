// Search a File (Columns).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int ARR = 5;
	ifstream inFile;
	string fileName, line;
	string product[ARR];
	double price[ARR];
	int pos;

	fileName = "ShopDetails.txt";

	inFile.open(fileName.c_str());

	if (inFile.fail())
	{
		cout << "The file cannot be OPENED" << endl;
	}

	for (int x = 0; x < ARR; x++)
	{
		getline(inFile, line);
		pos = line.find(',');
		product[x] = line.substr(0, pos);
		line = line.erase(0, pos + 1);
		price[x] = atof(line.c_str());
	}

	inFile.close();

	for (int z = 0; z < ARR; z++)
	{
		cout << product[z] << " " << price[z] << endl;
	}
	






	_getch();
	return 0;
}

