#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: stores the number of arguments passed
 * @argv: pointer array to the arguments passed
 * Return: (0) or (1)
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1, num2;

	num1 = argv[1];
	num2 = argv[2];

	printf("%d\n", num1 * num2);
	return (0);
}
