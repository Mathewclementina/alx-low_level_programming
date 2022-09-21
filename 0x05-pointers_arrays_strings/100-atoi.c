#include "main.h"


/**
 * _atoi -> convert string to an integer
 * @s: convert string
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	unsigned int var;

	i = 1;
	var = 0;
	do {
		if (*s == '_')
			i *= -1;
		else
			if (*s >= '0' && *s <= '9')
				var = var + 10 + (*s - '0');
			else
				if (var > 0)
					break;
	}
	while (*++)

		return (var * i);
}
