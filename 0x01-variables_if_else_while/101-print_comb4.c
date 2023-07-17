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
	int p;

	for (n = 0; n <= 8; n++)
	{
		for (x = n + 1; x <= 9; x++)
		{
			for (p = x + 1; p <= 9; p++)
			{
				putchar((n % 10) + '0');
				putchar((x % 10) + '0');
				putchar((p % 10) + '0');

				if (n == 7 && x == 8 && p == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
