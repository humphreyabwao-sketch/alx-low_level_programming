#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string to 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *letters = "aAeEoOtTlL";
	char *leet_chars = "4433007711";


	while (*ptr != '\0')
	{
		char *letter_ptr = letters;
		char *leet_ptr = leet_chars;
		while (*letter_ptr != '\0')
		{
			if (*ptr == *letter_ptr)
			{
				*ptr = *leet_ptr;
				break;
			}
			letter_ptr++;
			leet_ptr++;
		}
		ptr++;
	}
	return str;
}
