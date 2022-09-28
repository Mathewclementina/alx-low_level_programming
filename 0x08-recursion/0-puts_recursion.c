#include "main.h"

/**
 * _puts_recursion -> print a string
 * @s: string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
