#include <stdio.h>
/**
 * main - Program that print size of types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of char: %lu byte(s)\n", (unasigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unasigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unasigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unasigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unasigned long)sizeof(e));
return (0);
}
