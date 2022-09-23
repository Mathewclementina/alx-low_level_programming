#include "main.h"

/**
 * string_toupper -> change lowercase of a string to uppercase
 * @str: string
 * Return: return a character
 */

char *string_toupper(char *str)
{
	int index = 0

		while (str[index++])
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		}

	return (str);
}
