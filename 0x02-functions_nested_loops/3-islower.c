#include "main.h"
/**
 * _islower - function that checks for lowercase characters
 * @c: variable that stores the character
 * Return: 0 or 1d depending on the condition
 */
int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
else
{
return (0);
}
}
