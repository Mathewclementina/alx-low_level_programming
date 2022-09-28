#include "main.h"

/**
 * _puts_recursion -> print a string
 * @s: string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursions(s + 1);
	}
}
