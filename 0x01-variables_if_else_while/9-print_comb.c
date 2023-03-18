#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n <= 47; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
