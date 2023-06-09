#include <stdio.h>

int _atoi(char *s);
/**
 * _atoi - function that converts string into integer
 * @s: string to be converted
 * Return: converted integer
 */

int _atoi(char *s)
{
	int j, e, p, length, g, digit;

	j = 0, e = 0, p = 0, length = 0, g = 0, digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (j < length && g == 0)
	{
		if (s[j] == '-')
		{
			++e;
		}
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (e % 2)
			{
				digit = -digit;
			}
			p = (p * 10) + digit;
			g = 1;
			if (s[j + 1] <= '0' || s[j + 1] >= '9')
			{
				break;
			}
			g = 0;
		}
		j++;
	}
	if (g == 0)
	{
		return (0);
	}
	return (p);
}
/**
 * main - program that multiplies two numbers.
 * @argc: stores the number of arguments passed
 * @argv: pointer array to the arguments passed
 * Return: (0) or (1)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1, num2;

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
