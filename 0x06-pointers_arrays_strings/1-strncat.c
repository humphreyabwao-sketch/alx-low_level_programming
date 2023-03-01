#include "main.h"

/**
  * _strncat - a function that concatenates two strings.
  * @dest: string to be appended
  * @src: string to be appended by dest
  * @n: the number of bytes appended to dest from src
  * Return: string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int index = 0;

	while (dest[index++])
	{
		dest_length++;
	}

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[dest_length++] = src[index];
	}
	return (dest);
}
