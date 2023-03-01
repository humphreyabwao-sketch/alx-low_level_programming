#include "main.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @s: string to be changed
  * Return: changed string
  */
char *string_toupper(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] >= 'a' && s[m] <= 'z')
		{
			s[m] -= 32;
			m++;
		}
		m++;
	}
	return (s);
}
