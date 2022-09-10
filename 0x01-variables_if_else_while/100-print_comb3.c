#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i, n;

	for (i = 48; i <= 56; i++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				if (i != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
