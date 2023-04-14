#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: counts the number of arguments passed into it
 * @argv: stores string value of arguments
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
