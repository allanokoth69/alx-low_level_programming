#include <stdio.h>
/**
 * main - except q and e.
(*
 * Return: 0 upon completion
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
