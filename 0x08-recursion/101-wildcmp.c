#include "main.h"
#include <stdio.h> 

/**
 * wildcmp - Compares two strings with the special character *
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the second string is '*', it can match any string */
	if (*s2 == '*')
	{
		/* Recursively compare the rest of s1 and s2 */
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	/* If the current characters of both strings match or the second string has '?',
	 * recursively compare the rest of s1 and s2 */
	if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
		return (wildcmp(s1 + 1, s2 + 1));

	/* Otherwise, the strings are not identical */
	/* Otherwise, the strings are not identical */
}
