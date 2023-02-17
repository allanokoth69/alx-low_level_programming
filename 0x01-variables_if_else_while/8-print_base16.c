#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
int a = '0';

while (a <= '9')
{
putchar(a);
a++;
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);

}
