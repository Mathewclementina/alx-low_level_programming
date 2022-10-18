#include <stdio.h>

/**
 * main -> print the number of arguments passed into it
 * @argc: number
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
