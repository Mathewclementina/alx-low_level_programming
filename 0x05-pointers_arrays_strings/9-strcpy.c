#include "main.h"

/**
 * _strcpy -> copy the string
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int v = 0;

	while (*(src + v) != '\0')
	{
		*(dest + v) = *(src + v);
		v++;
	}
	*(dest + v) = '\0';

	return (dest);
}
