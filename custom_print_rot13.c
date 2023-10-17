#include <stdarg.h>
#include "main.h"
/**
 * custom_print_rot13 - Prints a rot13'ed string
 * @str: The input string to be rot13'ed and printed
 *
 * Return: The number of characters printed
 */
int custom_print_rot13(const char *str)
{
	int count = 0;

	if (str)
	{
		while (*str)
		{
			char c = *str;

			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				int offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';

				c = (c - offset + 13) % 26 + offset;
			}
			our_putchar(c);
			count++;
			str++;
		}
	}
	return (count);
}
