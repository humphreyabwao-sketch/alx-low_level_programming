#include "main.h"

/**
  * _atoi - a function that convert a string to an integer.
  * @s: the pointer to be converted
  * Return: integer
  */

int _atoi(char *s)
{
	int m = 0;
	unsigned int mi = 0;
	int min = 1;
	int isi = 0;

	while (s[m])
	{
		if (s[m] == 45)
		{
			min *= -1;
		}
		while (s[m] >= 48 && s[m] <= 57)
		{
			isi = 1;
			mi = (mi * 10) + (s[m] - '0');
			m++;
		}
		if (isi == 1)
		{
			break;
		}
		m++;
	}
	mi *= min;
	return (mi);
}
