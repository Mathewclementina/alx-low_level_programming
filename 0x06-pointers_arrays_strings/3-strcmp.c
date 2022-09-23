#include "main.h"

/**
 * _strcmp -> compare string
 * @s1: first string
 * @s2: second string
 * Return:
 *                returns zero if s1 == s2
 *                returns negative if s1 < s2
 *                returns positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0, diff = 0;

	while (1)
	{
		if (s1[l] == '\0' && s2[l] == '\0')
			break;
		else if (s1[l] == '\0')
		{
			diff = s2[l];
			break;
		}
		else if (s2[l] == '\0')
		{
			diff = s1[l]
				bresk;
		}
		else if (s1[l] != s2[l])
		{
			diff = s1[l] - s2[l];
			break;
		}
		else
			l++;
	}
	return (diff);
}
