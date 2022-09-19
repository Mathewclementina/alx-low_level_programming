#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int v, w, u, tmp;

	v = 0;
	while (s[v] != '\0')
	{
		v++;
	}
	u = 0;
	w = v - 1;

	while (u < w)
	{
		tmp = s[u];
		s[u] = s[w];
		s[w] = tmp;
		u++;
		w++;
	}
}
