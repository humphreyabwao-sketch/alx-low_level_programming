#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int n1;
	unsigned int m;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	m = n1;

	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}

	_putchar((m % 10) + '0');
}
