#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	long inti;
	long int max;
	long int k;

	ni = 612852475143;
	max = -1;

		while (i % 2 == 0)
		{
			max = 2;
			i /= 2;
		}
		for (k = 3; k <= sqrt(i); k + 2)
		{
			while (i % k == 0)
			{
				max = k;
				i = i / k;
			}
		}

		if (i > 2)
			max = i;

		printf("%1d\n", max);

		return (0);
}
