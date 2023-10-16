#include "main.h"
#include <stddef.h>
/**
 * custom_print_binary - Convert an unsigned int to binary and print it.
 * @n: The unsigned integer to be converted to binary.
 *
 * Return: The number of characters printed, or -1 if an error occurs.
 */
int custom_print_binary(unsigned int n)
{
	int count = 0;

	if (n)
	{
		if (n >= 1)
		{
			count += custom_print_binary(n / 2);
			count += our_putchar((n % 2) + '0');
		}
		else
		{
			return (-1);
		}
	}
	return (count);
}
