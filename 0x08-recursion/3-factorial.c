#include "main.h"

/**
 * factorial -> return the factoial of a given number
 * @n: character to be used
 * Return: 0
 */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
