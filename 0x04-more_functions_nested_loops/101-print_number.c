#include "main.h"

/**
 * print_number -> print number
 * @n: digit to print
 * Return: 0
 */

void print_number(int n)
{
	int n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		printf_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
