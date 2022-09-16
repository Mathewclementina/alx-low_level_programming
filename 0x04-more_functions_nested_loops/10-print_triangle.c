#include "main.h"
#include <stdio.h>

/**
 * print_triangle -> print a triangle
 * @size: size of the shape
 * Return: o
 */
void print_triangle(int size)
{

	int l, b, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (l = 0; l <= (size - 1); l++)
		{
			for (b = 0; b < (size - 1) - l; b++)
			{
				_putchar(' ');
			}
			for (s = 0; s <= l; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

