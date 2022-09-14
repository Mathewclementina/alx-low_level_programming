#include "main.h"

/**
 * _isalpha -> function that checks for alphabet character
 * @c: a character argument
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
