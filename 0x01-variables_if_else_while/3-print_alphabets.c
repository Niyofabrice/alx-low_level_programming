#include <stdio.h>
/**
 * main - a program to print alphabets in lowercase and in uppercase
 * Return: 0(Success);
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
