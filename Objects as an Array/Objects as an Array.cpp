// Objects AS Array Exam_Prep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "classOne.h"
using namespace std;

const int ARRAYSIZE = 5;

int _tmain(int argc, _TCHAR* argv[])
{
	classOne object[ARRAYSIZE];
	int num1, num2, num3;

	//Manually Initialise the ARRAY
	for (int x = 0; x < ARRAYSIZE; x++)
	{
		cout << "Enter the values to send to object " << x << endl;
		cin >> num1 >> num2 >> num3;
	}

	_getch();
	return 0;
}

