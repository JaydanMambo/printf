#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * custom_print_S - Prints a string with special formatting
 *			for non-printable characters
 * @str: The input string
 *
 * Return: The number of characters printed
 */
int custom_print_S(const char *str)
{
	int count = 0;

	if (str)
	{
		while (*str)
		{
			if (*str == '\n')
			{
				our_putchar('\\');
				our_putchar('n');
				count += 2;
			}
			else if (*str < 32 || *str >= 127)
			{
				our_putchar('\\');
				our_putchar('x');
				count += 2;
				count += custom_print_hex(*str, 'A');
			}
			else
			{
				our_putchar(*str);
				count++;
			}
			str++;
		}
	}
	return (count);
}


