#include "main.h"
#include <stdio.h>

/**
  * print_buffer - a function that prints a buffer.
  * @b: buffer
  * @size: size of the buffer
  * Return: void
  */

void print_buffer(char *b, int size)
{
	int a, m, n;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		n = size - a ? size - a : 10;
		printf("%08x: ", a);

		for (m = 0; m < 10; m++)
		{
			if (m < n)
			{
				printf("%02x", *(b + a + m));
			}
			else
			{
				printf("  ");
			}
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < n; m++)
		{
			int d = *(b + a + m);

			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}
