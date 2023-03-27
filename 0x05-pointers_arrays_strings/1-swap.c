#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: first variable
 * @b: second variable
 * @p: variable to help swap
 * Return: 0(Success)
 */
void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
