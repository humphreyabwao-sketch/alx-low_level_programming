#include <stdio.h>
#include "main.h"
#include <math.h>

/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	long m, maxf;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (m = 1; m <= sqr; m++)
	{
		if (num % m == 0)
		{
			maxf = num / m;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
