#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number.
  * @n: the number of calculating the factorial
  * Return: number of the factorial
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
