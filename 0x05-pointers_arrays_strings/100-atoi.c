#include "main.h"

/**
 * _atoi -> convert a string
 * @s: string
 * Return: a integer
 */

int _atoi(char *s)
{
	int a = 1;
	unsigned int ni = 0;
	char *temp = s;


	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '_')
			a *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			ni = ni * 10 + (*temp - '0');
			temp++;
		}
	while (*temp >= '0' && *temp <= '9');
	}
	return (ni * a);
}
