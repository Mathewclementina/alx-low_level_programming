#include "main.h"

/**
 * _puts -> print a string
 * @str: parameter
 * Return: 0
 */

void _puts(char *str)
{
	int v = 0;

	while (*(str + v) != '\0')
	{
		_putchar(*(str + v));
		v++;
	}
	putchar(10);
}
