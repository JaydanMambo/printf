#include <unistd.h>

/**
* our_putchar - prints the character c given to stdout
* @c: The character to be printed
*
* Return: On success 1
*         -1 if error occurs.
*/

int our_putchar(char c)
{
return (write(1, &c, 1));
}
