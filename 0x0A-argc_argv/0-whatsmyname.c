#include <stdio.h>
/**
 * main - program that prints its name followed by a new line
 * @argc: it counts the number of arguments passed in the terminal
 * @argv: is a vector that strores the string value of arguments passed
 * Return: the name of the file
 */
int main(int argc, char *argv[])
{
	(void) argc;
	print("%s\n", *argv);
	return (0);
}
