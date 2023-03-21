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
putchar(ch + '0');
}
return (0);
}
