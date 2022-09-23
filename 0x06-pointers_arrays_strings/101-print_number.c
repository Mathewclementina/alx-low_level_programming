#include "main.h"

/**
 * print_number -> print an integer
 * @n: interger
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (value / 10)
		print_number(value / 10);

	_putchar((value % 10) + '0');
}
