#include "_putchar.c"
char output()
{
printf("_putchar\n");
return (0);
}


void print_alphabet(void)
{
char ch;
for(ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
}
