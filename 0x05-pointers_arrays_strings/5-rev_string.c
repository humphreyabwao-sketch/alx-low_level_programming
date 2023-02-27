#include "main.h"
#include <stdio.h>

/**
  * rev_string - a function that reverses a string.
  * @s: reversed string to be printed
  * Return: void
  */

void rev_string(char *s)
{
	int length = 0;
	int strlength = 0;
	char temp;

	while (s[strlength++])
		length++;

	for (strlength = length - 1; strlength >= length / 2; strlength--)
	{
		temp = s[strlength];
		s[strlength] = s[length - strlength - 1];
		s[length - strlength - 1] = temp;
	}
}
