#include <stdio.h>
#include "main.h"

/**
  * _memcpy - a function that copies memory area.
  * @n: number of bytes from memory area src to memory area dest
  * @src: memory area to be copied to dest
  * @dest: memory area that src is copied
  * Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
