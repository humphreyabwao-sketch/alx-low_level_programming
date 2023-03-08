#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - a function that returns the string length
  * @s: string to be checked
  * Return: the length of the string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}

/**
  * str_comparator - compares the string
  * @s: string to be compared
  * @num1: smallest iterator
  * @num2: biggest iterator
  * Return: int
  */

int str_comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
		{
			return (1);
		}
		return (0 + str_comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - a function that returns 1
  * if a string is a palindrome and 0 if not.
  * @s: string
  * Return: 1 if a string is a palindrome otherwise 0.
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (str_comparator(s, 0, _strlen_recursion(s) - 1));
}
