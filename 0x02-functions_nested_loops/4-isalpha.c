#include "main.h"
/**
 * _isalpha - functions that checks for alphabetic character
 * @c: a variable that stores the character
 * Return: 0 or 1 depending on the conditions
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
