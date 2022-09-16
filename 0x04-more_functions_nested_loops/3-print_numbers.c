#include "main.h"
#include <stdio.h>

/**
 * print_numbers -> function that prints the numbers, from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{

	int a;

	for (a = 48; a <= 58; a++)
	{
		putchar(a);
	}
	putchar(10);
}
