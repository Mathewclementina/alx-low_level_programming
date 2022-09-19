#include "main.h"
#include <stdio.h>

/**
 * print_rev -> print a string
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
