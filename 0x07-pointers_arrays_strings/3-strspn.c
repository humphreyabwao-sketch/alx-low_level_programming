#include <stdio.h>
#include "main.h"

/**
  * _strspn - a function that gets the length of a prefix substring.
  * @s: input
  * @accept: bytes to be cosisted in segment s
  * Return: Always 0 (success)
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, value, check;

	value = 0;

	for (m = 0; s[m] != '\n'; m++)
	{
		check = 0;

		for (n = 0; accept[n] != '\n'; n++)
		{
			if (accept[n] == s[m])
			{
				value++;
				check = m;
			}
		}
	}
}
