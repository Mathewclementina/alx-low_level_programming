#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string
 * @accept: string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == acceptn[n])
				break;
		}
		if (!accept[n])
			break;
	}
	return (m);
}
