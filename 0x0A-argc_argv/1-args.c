#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into the program
 * @argc: number of arguments passed
 * @argv: pointer array to the arguments
 * Return: (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
