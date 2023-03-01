#include "main.h"

/**
  * leet - a function that encodes a string into 1337
  * @str: single user output
  * Return:- Always 0 (success).
  */

char *leet(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		while (str[m] == 'a' || str[m] == 'A')
			str[m] = '4';

		while (str[m] == 'e' || str[m] == 'E')
			str[m] = '3';

		while (str[m] == 'o' || str[m] == 'O')
			str[m] = '0';

		while (str[m] == 't' || str[m] == 'T')
			str[m] = '7';

		while (str[m] == 'l' || str[m] == 'L')
			str[m] = '1';
	}
	return (str);
}
