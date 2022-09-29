#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -> return the natural square root of a number.
 * @n: character to be used
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt_recursion -> square root of a number
 * @n: character to be used
 * @x: character to be used
 * Return: 0
 */

int _sqrt_recursion(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
