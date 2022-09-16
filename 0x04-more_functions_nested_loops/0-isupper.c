#include "main.h"

/**
 * _isupper -> check for an uppercase character
 * @c: argument of character
 * Return: 0
 */

int _isupper(int c);
{

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
