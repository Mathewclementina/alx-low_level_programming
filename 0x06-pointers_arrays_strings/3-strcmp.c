#include "main.h"

/**
 * _strcmp -> compare string
 * @s1: first string
 * @s2: second string
 * Return:
 *                returns zero if s1 == s2
 *                returns negative number if s1 < s2
 *                returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0, d = 0, g = 0, o = 0, z;

	while (s1[l])
	{
		l++;
	}
	while (s2[d])
	{
		 d++;
	}
	if (l <= d)
	{
		 z = l;
	}
	else
	{
		z = d;
	}
	while (g <= z)
	{
		if (s1[g] == s2[g])
		{
			g++;
			continue;
		}
		else
		{
			o = s1[g] - s2[g];
			break;
		}
		g++;
	}
}
