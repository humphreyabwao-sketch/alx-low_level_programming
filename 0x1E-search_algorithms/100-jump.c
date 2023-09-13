#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size), prev = 0;

if (array == NULL || size == 0)
return (-1);

while (array[step] <= value && step < size)
{
printf("Value checked array[%lu] = [%d]\n", step, array[step]);
prev = step;
step += sqrt(size);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

while (array[prev] < value)
{
prev++;

if (prev == fmin(step, size))
return (-1);

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

if (array[prev] == value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
return (prev);
}

return (-1);
}
