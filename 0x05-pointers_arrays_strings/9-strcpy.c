#include "main.h"


/**
  * _strcpy - a function that copies the string pointed to by src,
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest.
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	dest[m++] = '\0';
	return (dest);
}
