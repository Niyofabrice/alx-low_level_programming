#include <stdio.h>

/**
 * main - function that prints arguments passed to the program
 * @argc: stores the number of arguments passed
 * @argv: pointer array to the arguments passed
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
