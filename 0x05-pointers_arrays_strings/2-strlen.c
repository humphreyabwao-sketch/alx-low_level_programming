#include "main.h"

/**
  * _strlen - a function that returns the length of a string.
  * @s: the string to get the length of.
  * Return: returns the length of s.
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
