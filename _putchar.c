#include <unistd.h>

/**
 * _putchar - writes charchters
 * @c: the charchter
 * Return: c
*/

int _putchar(char c)
{
return (write(1, & c, 1));
}
