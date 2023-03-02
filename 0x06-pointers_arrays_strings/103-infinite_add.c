#include "main.h"

/**
  * rev_string - reverse array
  * @n: integer parameter
  * Return: 0
  */
void rev_string(char *n)
{
	int m = 0;
	int p = 0;
	char tmp;

	while (*(n + m) != '\0')
	{
		m++;
	}
	m--;

	for (p = 0; p < m; p++, m--)
	{
		tmp = *(n + p);
		*(n + p) = *(n + m);
		*(n + m) = tmp;
	}
}

/**
  * infinite_add - add 2 numbers together
  * @n1: text representation of 1st number to add
  * @n2: text representation of 2nd number to add
  * @r: pointer to buffer
  * @size_r: buffer size
  * Return: pointer to calling function
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, m = 0, p = 0, digits = 0;
	int val1 = 0, val2 = 0, tmp_tot = 0;

	while (*(n1 + m) != '\0')
		m++;
	while (*(n2 + p) != '\0')
		p++;
	m--;
	p--;
	if (p >= size_r || m >= size_r)
		return (0);
	while (p >= 0 || m >= 0 || overflow == 1)
	{
		if (m < 0)
			val1 = 0;
		else
			val1 = *(n1 + m) - '0';
		if (p < 0)
			val2 = 0;
		else
			val2 = *(n2 + p) - '0';
		tmp_tot = val1 + val2 + overflow;
		if (tmp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_tot % 10) + '0';
		digits++;
		p--;
		m--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
