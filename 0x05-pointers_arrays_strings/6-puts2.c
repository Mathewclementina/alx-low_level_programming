#include "main.h"
#include <stdio.h>

/**
 * puts2 -> print every character of a string
 * @str: character
 * Return: 0
 */

void puts2(char *str)
{
	int v = 0;

	while (*(str + v) != '\0')
	{
		if (v % 2 == 0)
			putchar(*(str + v));
		v++;
	}
	putchar(10);
}

