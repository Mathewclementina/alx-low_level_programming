#include "main.h"

/**
 * _pow_recursion ->  return the value of x raised to the power of y
 * @x: character to be used
 * @y: character to be used
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
