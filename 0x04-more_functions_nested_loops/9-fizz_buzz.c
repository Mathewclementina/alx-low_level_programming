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
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else
			if (i % 5 == 0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			else
				if (i % 3 == 0 && i % 5 == 0)
				{
					pintf("FizzBuzz");
				}
				else
					if (i == 1)
					{
						printf("%d", i);
					}
	}
	printf("\n");

	return (0);
}