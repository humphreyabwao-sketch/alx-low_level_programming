#include <stdio.h>
#include "main.h"

/**
  * _strpbrk -  a function that searches a string for any of a set of bytes.
  * @s: string
  * @accept: input
  * Return: Always 0 (success)
  */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				return (s + m);
			}
		}
	}
	return (NULL);
}
