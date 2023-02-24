#include "main.h"

/**
  * print_triangle - a function that prints a triangle
  * @size: single input character.
  * Return: Always 0 (success)
  */

void print_triangle(int size)
{
	int m, n, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = size - m; n > 1; n--)
			{
				_putchar(32);
			}
			for (p = 0; p <= m; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
