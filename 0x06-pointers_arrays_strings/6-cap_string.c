#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string.
  * @str: single user input
  * Return: Always 0.
  */

char *cap_string(char *str)
{
	int m = 0;

	while (str[m])
	{
		while (!(str[m] >= 'a' && str[m] <= 'z')
				m++;
	}
	if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}' || i == 0)
	{
	str[i] -= 32;
	}
	return (str);
}
