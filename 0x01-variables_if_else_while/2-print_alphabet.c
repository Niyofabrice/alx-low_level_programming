#include <stdio.h>
/**
 * main - a program that prints the alphabets in lowercase letters
 * Return: 0(Success);
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(" ");
return (0);
}
