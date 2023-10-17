#include <stdarg.h>
#include "main.h"
/**
 * custom_print_reverse - Prints a reversed string
 * @str: The input string to be reversed and printed
 *
 * Return: The number of characters printed
 */
int custom_print_reverse(const char *str)
{
	int count = 0;

	if (str)
	{
		const char *end = str;

		while (*end)
		{
			 end++;
		}
		end--;
		while (end >= str)
		{
			our_putchar(*end);
			end--;
			count++;
		}
	}
	return (count);
}
