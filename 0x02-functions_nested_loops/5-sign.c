#include "main.h"
/**
 * print_sign - Shows 1 if the number is positive
 * shows -1 if number is negative
 * in other cases shows zero
 *
 *@n: the input number is an integer
 *
 * Return: 1 for positive,-1 for negative & 0 for the rest.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
