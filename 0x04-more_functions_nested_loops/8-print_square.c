#include "main.h"
/**
  * print_square - a function that prints a square
  * @size: single input digit.
  * Return: Always 0 (success)
  */
void print_square(int size)
{
	int m, n;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m <= size; m++)
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
