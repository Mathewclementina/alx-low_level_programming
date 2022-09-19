#include "main.h"

/**
 * _puts -> print a string
 * @str: parameter
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
