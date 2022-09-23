#include "main.h"

/**
 * print_number -> print an integer
 * @n: interger
 * Return: 0
 */

void print_number(int n)
{
	unsigned int value;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	value = n;

	if (value / 10)
		print_number(value / 10);

	_putchar((value % 10) + '0');
}
