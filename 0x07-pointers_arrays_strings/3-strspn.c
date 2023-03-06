#include "main.h"

/**
 * _strspn - Entry point
 * @S: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		len++;
		break;
	}
	}
	if (accept[j] == '\0')
		break;
	}
	return (len);
