#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints alphabet in both upper and lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 65;
	int m = 97;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
