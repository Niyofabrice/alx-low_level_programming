#include <stdio.h>

/**
 * main - function that prints the name of its file followed by a new line
 * @argc: number of arguments to be passed
 * @argv: pointer array of arguments passed
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
