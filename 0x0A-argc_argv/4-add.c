#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_number - function that checks if there are strings in digits
 * @s: pointer to the string
 * Return: (0)
 */

int check_number(char *s)
{
	unsigned int count;

	count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - function that adds positive numbers
 * @argc: stores number of arguments passed
 * @argv: pointer array to the arguments passed
 * Return: (1) or (0)
 */

int main(int argc, char *argv[])
{
	int count, strintToInteger, sum;

	count = 1;
	sum = 0;
	while (count < argc)
	{
		if (check_number(argv[count]))
		{
			stringToInteger = atoi(argv[count]);
			sum += stringToInteger;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
