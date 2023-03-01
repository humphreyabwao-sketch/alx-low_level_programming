#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: array of integers to be reversed
  * @n: number of elements in an array
  */

void reverse_array(int *a, int n)
{
	int tmp;
	int m;

	for (m = n - 1; m >= n / 2; m--)
	{
		tmp = a[n - 1 - m];
		a[n - 1 - m] = a[m];
		a[m] = tmp;
	}
}
