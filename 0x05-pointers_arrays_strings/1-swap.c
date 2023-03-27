#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: first variable
 * @b: second variable
 * Return: 0(Success)
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
