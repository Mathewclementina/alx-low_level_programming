#include "main.h"

/**
 * print_to_98 -> print all natural numbers from 0 to 98
 * @n: parameter
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%i, ", n--);
		printf("d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%i, ", n++);
		printf("%i\n", n);
	}
}
