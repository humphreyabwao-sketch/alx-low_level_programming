#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Programe that prints the possible combination of three digits'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';
	int b;
	int c;

	while (b <= '8')
	{
		c = b + 1;
	while (c <= '9')
	{
		putchar(a);
		putchar(b);
		putchar(c);
	if (a == '7' && b == '8' && c == '9')
	{
		putchar('\n');
		{
			else
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		b++;
		else	
	}
	a++;
	}
	putchar('\n');
	return 0;
}
