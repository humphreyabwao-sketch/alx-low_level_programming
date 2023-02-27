#include "main.h"

/**
  * swap_int - a function that swaps the values of two integers.
  * @a: single input digit.
  * @b: single input digit.
  * Return: Always 0 (success)
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
