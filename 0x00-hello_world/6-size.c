#include <stdio.h>

/**
 * main - prints the size of various types on
 * the computer it is complied and run on..
 * Return: Always 0.
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));:
	printf("Size of a float %zu byte(s)\n", sizeof(float));
	return (0);
}
