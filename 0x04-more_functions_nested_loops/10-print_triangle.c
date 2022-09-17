#include "main.h"
#include <stdio.h>

/**
 * print_triangle -> print a triangle
 * @size: size of the shape
 * Return: o
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		int l, b;

		for (l = 0; l <= size; l++)
		{
			for (b = l; b < ; b++)
			{
				_putchar('');
			}

			for (b = 1; b <= l; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
