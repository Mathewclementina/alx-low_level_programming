#include "main.h"

/**
 * print_diagonal -> draw a diagonal line
 * @n: argument
 * Return: 0
 */
void print_diagonal(int n)
{
	int l, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (b = 1; b < l; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
