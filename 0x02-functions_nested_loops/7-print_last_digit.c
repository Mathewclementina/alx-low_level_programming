#include "main.h"

/**
 * print_last_digit -> print the last digit number
 * @r: last value
 * Return: 0
 */
int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	return (r % 10);
}
