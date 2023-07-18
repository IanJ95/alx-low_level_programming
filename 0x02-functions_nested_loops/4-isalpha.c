#include "main.h"
/**
 * _isalpha - Shows 1 if the input is an alphabet
 *both upper and lower case in other cases shows zero
 *
 * @c: the character is in ASCII code
 *
 * Return: 1 for alphabets, 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

