#include "main.h"

/**
 * _strcat -> convert two strings
 * string
 * @dest: sting to be append
 * @src: string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = o;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
