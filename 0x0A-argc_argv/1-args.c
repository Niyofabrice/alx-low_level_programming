#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: it counts the number of arguments passed into it
 * @argv: it stores the string  value of arguments passed
 * Return: the number of arguments passed into it
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
