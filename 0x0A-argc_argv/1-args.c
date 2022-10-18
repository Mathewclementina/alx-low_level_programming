#include <stdio.h>
#include "main.h"

/**
 * main -> print the number of arguments passed into it
 * @argc: number
 * @argv: argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
