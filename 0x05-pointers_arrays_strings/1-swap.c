#include "main.h"
/**
 * swap_int - swaps the values of integers
 *
 * @a: pointer of type integer to be swapped
 * @b: pointer pf type integer to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
