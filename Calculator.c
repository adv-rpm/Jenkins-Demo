#include "calculator.h"


int add(int a, int b)
{
return a + b;
}

int sub(int a, int b)
{
return a - b;
}

int multiply(int a, int b)
{
return a * b;
}

int limit_value(int value)
{
	if (value > 100)
	{
		return 100;
	}
	if (value < 0)
	{
		return 0;
	}
	return value;
}