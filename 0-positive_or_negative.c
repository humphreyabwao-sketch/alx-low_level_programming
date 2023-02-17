#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - -main block
 * description: get a random number and print number
 * return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >0)
		printf("%i is poditive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	return (0);
}
