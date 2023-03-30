#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * print_before - Prints a string before the
 * main function is executed.
 * Return: Always 0 (success)
 */

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
