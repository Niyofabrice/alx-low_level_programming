#include <stdio.h>
/**
 * main - a program to print alphabets in lowercase letters excluding e and q
 * Return: 0(Success);
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
