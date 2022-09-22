#include "main.h"

/**
 * leet -> encode a string into 1337
 * @s: string
 * Return: 0
 */

char *leet(char *s)
{
	int l, k;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (l = 0; *(s + l); l++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[k] == *(s + l))
				*(s + l) = b[k];
		}
	}
	return (s);
}
