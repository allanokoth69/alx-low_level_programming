#include <unistd.h>
/**
*_putchar -writes character -c to stdout
*Return: 1 On success
*On error, return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
