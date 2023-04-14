#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two integers
 * @argc: counts the arguments passed into it
 * @argv: stores the string value of arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int mult = 0;
	int i;

	if (argc > 1)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
