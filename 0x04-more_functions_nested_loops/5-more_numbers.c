#include "main.h"

/**
  * more_numbers - a function that prints 10 times the numbers, from 0 to 14
  * Return: Always 0 (success)
  */

void more_numbers(void)
{
	int m = 0;
	int n;

	while (m <= 10)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	m++;
	}
}
