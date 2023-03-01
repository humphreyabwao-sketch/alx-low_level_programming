#include "main.h"

/**
  * _strcmp - a function that compares two strings.
  * @s1: string to be compared to s2
  * @s2: string to be compared to s1
  * Return: if s1<s2,the negative difference of the first unmatched characters
  * if s1 == s2, 0
  * if s1 > s2, the positive difference of the first unmatched characters
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
