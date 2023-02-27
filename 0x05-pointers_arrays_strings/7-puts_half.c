#include "main.h"

/**
  * puts_half - a function that prints half of a string,followed by a new line.
  * @str: the string to be printed
  * Return: void
  */

void puts_half(char *str)
{
	int m = 0;
	int n;

	while (str[m] != '\0')
	{
		m++;
	}
	if (m % 2 == 1)
	{
		n = (m - 1) / 2;
		n += 1;
	}
	else
	{
		n = m / 2;
	}
	for (; n < m; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
