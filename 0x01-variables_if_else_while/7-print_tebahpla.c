#include <stdio.h>
/**
 * main - program to print aalphabets in reverse
 * Return: 0 (Success);
 */
int main(void)
{
int ch = 122;
while (ch >= 97)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
