#include "stdafx.h"
#include "classOne.h"


classOne::classOne(int nr1,int nr2,int nr3)
{
	val1 = (nr1);
	val2 = (nr2);
	val3 = (nr3);
}

double classOne::getSum()
{
	return (val1 + val2 + val3);
}

double classOne::getAve()
{
	return (getSum() / 3);
}

classOne::~classOne()
{
}
