#include "main.h"
/**
 * print_sign - program that prints the sign of a number
 * @n: variable that stores the number
 * Return: 0, 1 or -1 depending in the condition
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return  (0);
}
else
{
_putchar('-');
return (-1);
}
}
