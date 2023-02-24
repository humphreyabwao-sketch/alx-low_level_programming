#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (success)
  */
int main(void)
{
	int m = 1;

	while (m < 100)
	while (m <= 100)
	{
		int Fizz = m % 3;
		int Buzz = m % 5;

		if (Fizz == 0 && Buzz == 0)
		{
			printf("FizzBuzz");
		}
		else if (Fizz == 0)
		{
			printf("Fizz");
		}
		else if (Buzz == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", m);
		}
		if (m != 100)
		{
			printf(" ");
		}
		m++;
	}
	printf("\n");
	return (0);
}
