#include <stdio.h>
/**
 * main - program to print aalphabets in reverse
 * Return: 0 (Success);
 */
int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
