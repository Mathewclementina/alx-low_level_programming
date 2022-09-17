#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", "Bizz");
		}
		else
			if (i % 3 == 0 && i % 5 != 0)
			{
				printf("%s", "FizzBuzz");
			}
			else
				if (i % 3 == 0)
				{
					printf("%s", "Fizz");
				}
				else
					if (i % 5 == 0)
					{
						printf("%s", "Buzz");
					}
					else
						printf("%d", i);
	}
	printf("\ n");
	return (0);
}
