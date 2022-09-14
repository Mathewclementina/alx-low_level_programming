#include "main.h"

/**
 * print_last_digit -> print the last digit number
 * @r: last value
 * Return: 0
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}
