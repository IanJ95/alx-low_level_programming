#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print comb'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n <= 100; n++)
	{
		for (x = n + 1; x <= 99; x++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((x % 10) + '0');

			if (n == 99 && x == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

