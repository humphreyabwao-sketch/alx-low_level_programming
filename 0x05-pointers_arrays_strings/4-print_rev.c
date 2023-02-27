#include "main.h"

/**
  * print_rev - a function that prints a string, in reverse
  * followed by a new line.
  * @s: string to be printed
  * Return: void
  */

void print_rev(char *s)
{
	int m = 0;

	while (s[m] != '\0')
		m++;
	for (m -= 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
