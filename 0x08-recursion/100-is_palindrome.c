#include "main.h"

int palindromehelper(char *s, int count, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 0 if a palindrome is passed to them
 * @s: string
 * Return: (0) or (1)
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (palindromehelper(s, 0, _strlen_recursion(s)));
	}
}

/**
 * _strlen_recursion - function that return the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindromehelper - function that calculates the palindrome
 * @s: string
 * @count: iterator
 * @length: length of string
 * Return: (0) or (1)
 */

int palindromehelper(char *s, int count, int length)
{
	if (*(s + 1) != *(s + (length - 1)))
	{
	return (0);
	}
	if (count >= length)
	{
	return (1);
	}
	return (palindromehelper(s, count + 1, length - 1));
}
