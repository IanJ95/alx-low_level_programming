#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print lowercase alphabet without q and e'
 * Return: Always 0 (success)
 */
int main(void)
{
	int p = 97;

	while (p <= 122)
	{
		if (p == 101 || p == 113)
		{
			p++;
			continue;
		}
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
