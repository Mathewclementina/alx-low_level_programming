#include "main.h"

/**
 * print_number -> print number
 * @n: digit to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
	{
		printf_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
