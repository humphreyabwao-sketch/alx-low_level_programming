#include "main.h"

/**
  * _strcat - a function that concatenates two strings.
  * @dest: string to be appended upon
  * @src: string to be appended to dest
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int m;
	int dest_length = 0;

	while (dest[dest_length]++)
	{
		dest_length++;
	}
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[dest_length++] = src[m];
		dest_length++;
	}
	dest_length = '\0';
	return (dest);
}
