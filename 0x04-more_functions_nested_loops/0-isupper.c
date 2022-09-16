#include "main.h"

/**
 * _isupper -> check for an uppercase character
 * @a: argument of character
 * Return: 0
 */

int _isupper(int a);
{

	if ((a >= 'A') && (a <= 'Z'))
	{
		return (1);
	}

	return (0);
}
