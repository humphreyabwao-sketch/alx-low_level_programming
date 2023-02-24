#include "main.h"

/**
  * print_diagonal - a function that draws a diagonal line on the terminal.
  * @n: the number of times the character \ should be printed
  * Return: Always 0 (success)
  */

void print_diagonal(int n)
{
	int k, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (m = 0; m < k; m++)
			{
				_putchar(32);
			}
		_putchar(32);
		_putchar('\n');
		}
	}
}
