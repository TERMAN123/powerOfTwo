#include "pch.h"
#include <stdio.h> 
#include <iostream>

bool isPowerOfTwo(int n)
{
	if (n == 0)
	{
		return false;
	}
	while (n != 1)
	{
		if (n % 2 != 0)
			return false;
		n = n / 2;
	}
	return true;
}

void checkPowerOfTwo(int num)
{
	std::cout << num << " is ";
	if (!isPowerOfTwo(num))
	{
		std::cout << "not ";
	}
	std::cout << "power of two" << "\n";
}

int main()
{
	const int num1 = 24;
	const int num2 = 128;
	checkPowerOfTwo(num1);
	checkPowerOfTwo(num2);
	return 0;
}