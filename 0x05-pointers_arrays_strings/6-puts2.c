#include "main.h"

/**
  * puts2 - a function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: string to be printed
  * Return: void
  */

void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[m] != '\0')
		m++;

	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
