#include <stdio.h>
#include "main.h"
#include <stddef.h>
/**
 * custom_print_str - Handles 's' specifier for custom_printf
 * @str: Pointer to the string
 *
 * Return: The number of characters printed.
 */
int custom_print_str(char *str)
{
	int length = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[length])
	{
		our_putchar(str[length]);
		length++;
	}
	return (length);
}
