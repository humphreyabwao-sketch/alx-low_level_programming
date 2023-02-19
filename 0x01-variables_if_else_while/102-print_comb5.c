#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints the combination of two-digits numbers'
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	int first, second;

	for (first = 0; first < 100; first++)
	{
	for (second = 0; second < 100; second++)
	{
		if (first < second)
		{
			putchar((first / 10) + 48);
			putchar((first % 10) + 48);
			putchar(' ');
			putchar((second / 10) + 48);
			putchar((second % 10) + 48);
			if (first != 98 || second != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}

	putchar('\n');
	return (0);
}
