#include "main.h"

/**
 * rot13 -> encode string using rot13
 * @s: string
 * Return: 0
 */

char *rot13(char *s)
{
	int l, k;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (l = 0; *(s + l); l++)
	{
		for (k = 0; k < 52; k++)
		{
			if (a[k] == *(s + l))
			{
				*(s + l) = b[k];
				break;
			}
		}
	}
	return (s);
}
