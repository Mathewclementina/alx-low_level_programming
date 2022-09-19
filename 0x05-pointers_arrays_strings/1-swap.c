#include "main.h"

/**
 * swap_int -> swap the value of two integers
 * @a: var1
 * @b: var2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
