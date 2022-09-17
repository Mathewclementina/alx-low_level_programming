#include "main.h"

/**
 * print_number -> print number
 * @n: digit to print
 * Return: 0
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value = -value;
	}
	if (value > 9)
	{
		printf_number(value / 10);
	}
	_putchar(value % 10 + '-');
}
