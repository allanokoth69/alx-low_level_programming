#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and  uppercase.
(*
 * Return: success
 */
int main(void)
{
char a = 'a';
char b = 'A';

while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);

}
