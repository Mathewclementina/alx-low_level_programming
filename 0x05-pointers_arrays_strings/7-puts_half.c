#include "main.h"
#include <stdio.h>

/**
 * puts_half -> print half of a string
 * @str: half a string
 * Return: half the string
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
