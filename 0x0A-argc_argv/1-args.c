#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: it counts the number of arguments passed into it
 * @argv: it stores the string  value of arguments passed
 * Return: the number of arguments passed into it
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
