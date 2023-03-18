#include <stdio.h>
/**
 * main - program to print single digit numbers of base 10 from 0
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + 48);
}
putchar('\n');
return (0);
}
