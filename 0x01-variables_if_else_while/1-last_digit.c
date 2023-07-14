#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - Entry point
 *  Description: 'get the last digit of a number'
 *  return always 0 successful
 */
int main(void)
{
/* get the last digit */
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* use an if,elsee if, else loop */
	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and  not 0\n", n, ld);
	}
	return (0);
}
