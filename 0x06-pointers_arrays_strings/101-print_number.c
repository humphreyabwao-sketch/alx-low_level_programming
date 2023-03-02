#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int n1;
	unsigned int m = n;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		m = -n;
	}

	if ((m / 10) > 0)
	{
		n1 = n;
		print_number(m / 10);
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
	_putchar((m % 10) + '0');
}
