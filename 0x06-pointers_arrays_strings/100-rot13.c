#include "main.h"
#include <stdio.h>

/**
  * rot13 - encoder rot13
  * @m: pointer to string parameter
  * Return: *m
  */

char *rot13(char *m)
{
	int p, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; m[p] != '\0'; p++)
	{
		for (r = 0; r < 52; r++)
		{
			if (m[p] == data1[r])
			{
				m[p] = datarot[r];
				break;
			}
		}
	}
	return (m);
}
