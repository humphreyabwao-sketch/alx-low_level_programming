#include <stdio.h>
#include "main.h"

/**
  * is_prime_number - a function that returns a prime number.
  * @n: input number to be checked
  * Return: integer value
  */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - a function that checks if a number is prime
  * @n: input number to be checked
  * @m: iteration number
  * Return: 1 for a prime number otherwise 0 for a composite
  */

int check_prime(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % m == 0 && m > 1)
	{
		return (0);
	}
	if ((n  / m) < m)
	{
		return (1);
	}
	return (check_prime(n, m + 1));
}
