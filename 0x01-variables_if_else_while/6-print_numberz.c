#include <stdio.h>
/**
 * main - prints numbers 0-9 with putchar
(*
 * Return: 0 success
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
