#include <stdio.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: counts the number of arguments
 * @argv: stores the string value of arguments
 * Return: 1(Error), 0(Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		if (sizeof(argv[i] != 4)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	for (j = 0; j < argc; j++)
	{
		add += argv[j];
	}
	printf("%d\n", add);
	return (0);
}
