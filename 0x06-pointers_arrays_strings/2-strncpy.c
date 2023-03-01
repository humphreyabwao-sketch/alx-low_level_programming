#include "main.h"

/**
  * _strncpy - a function that copies a string.
  * @dest: stores the string copy
  * @src: source string
  * @n: maximum bytes copied from src
  * Return: a pointer that results from string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_length = 0;

	while (src[i++])
	{
		src_length++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		src[i] = dest[i];
	}
	for (i = src_length; i < n; i++)
	dest[i] = '\0';

	return (dest);

}
