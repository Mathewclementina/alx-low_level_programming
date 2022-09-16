#include "main.h"

/**
 * print_diagonal -> draw a diagonal line
 * @n: argument
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			for (k = o; k < n; k++)
			{
				if (k == i)
					_putchar('\\');
				else
					if (k < i)
						_putchar('');
			}
			_putchar('\n');
		}
	}
}
