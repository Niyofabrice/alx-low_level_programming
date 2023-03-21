#include "main.h"
/**
 * main - program that prints the alphabets
 * Return: 0 (Success);
 */
void print_alphabet(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
