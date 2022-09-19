#include "main.h"
#include <stdio.h>

/**
 *  print_array -> print element of an array of an integer
 *  @a: var1
 *  @n: var2
 *  Return: 0
 */

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		if (v != n - 1)
			printf("%d, ", a[v]);
		else
			printf("%d", a[v]);
	}
	putchar(10);
}
