#include "main.h"

/**
 * print_alphabet_x10 -> print times 10 alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, d;

	for (d = 'a'; d <= 'z'; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
