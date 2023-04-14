#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that converts string into integer
 * @s: variable to  store the string value
 * Return: integere
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = d = n = len = f = digit = 0;

	while (s[len] != '\0')

		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')

			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)

				digit = -digit;

			n = n * 10 + digit;

			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;

			f = 0;
		}
		i++;
	}
	if (f == 0)

		return (0);

	return (n);
}
/**
 * main - program that multiplies two integers
 * @argc: counts the arguments passed into it
 * @argv: stores the string value of arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
