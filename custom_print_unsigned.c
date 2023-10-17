#include "main.h"
/**
 * custom_print_unsigned - Handles printing unsigned decimal numbers
 * @num: The unsigned integer to be printed
 * @base: The base (typically 10 for decimal)
 *
 * Return: The number of characters printed
 */
int custom_print_unsigned(unsigned int num, int base)
{
	int count = 0;
	char buffer[40];

	int i = 0;

	while (num > 0)
	{
		buffer[i] = (num % base) + '0';
		num /= base;
		i++;
	}
	if (i == 0)
		buffer[i++] = '0';
	while (i > 0)
	{
		count += our_putchar(buffer[--i]);
	}
	return (count);
}
