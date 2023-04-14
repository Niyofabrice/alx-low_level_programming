#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name followed by a new line
 * @argc: it counts the number of arguments passed in the terminal
 * @argv: is a vector that strores the string value of arguments passed
 * Return: the name of the file
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", argv[0]);
	return (0);
}
