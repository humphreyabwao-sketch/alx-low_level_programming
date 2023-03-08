#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - a function that returns
  * the natural square root of a number.
  * @n: single input number
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, 1));
}

/**
  * _sqrt - a function that gets the square root of a number
  * @num: number to calculate the square root
  * @m: iterate number
  * Return: natural square root
  */

int _sqrt(int num, int m)
{
	int sqrt = m * m;

	if (sqrt > num)
	{
		return (-1);
	}
	if (sqrt == num)
	{
		return (m);
	}
	return (_sqrt(num, m + 1));
}
