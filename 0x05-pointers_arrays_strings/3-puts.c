#include "main.h"
/**
 * _puts - writes a string to standard output
 *
 * @str: string
 *
 * Return: length
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
