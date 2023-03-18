#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints if a number is >5, =0 and <6
 * Return: 0(Success)
 */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("the last digit of %d is %d and is greater than 5", n, ld);
}
else if (ld == 0)
{
printf("the last digit of %d is %d and is equal to 0", n, ld);
}
else
{
printf("the last digit of %d is %d and is less than 6 and is not 0", n, ld);
}
return (0);
}
