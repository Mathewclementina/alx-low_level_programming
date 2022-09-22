#include "main.h"

/**
 * cap_string -> capitalize all words of a string
 * @s: string to be capitalize
 * Return: 0
 */

char *cap_string(char *s)
{
	int l = 0, k;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + l))
	{
		if (*(s + l) >= 'a' && *(s + l) <= 'z')

		{
			if (l == 0)
				*(s + l) -= 'a' - 'A';
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == *(s + l - 1))
						*(s + l) -= 'a' - 'A';
				}
			}
		}
		l++;
	}
	return (s);
}
