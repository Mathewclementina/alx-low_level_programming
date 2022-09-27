#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: memory
 * @src: memory
 * @n: number
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
