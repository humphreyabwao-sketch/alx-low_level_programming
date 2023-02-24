#include "main.h"

/**
  * print_most_numbers - a function that prints the numbers, from 0 to 9
  * Return: Always 0 (success)
  */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if (m == 2 || m == 4)
		{
			continue;
		}
		else
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');
}
