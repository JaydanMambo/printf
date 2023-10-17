#include "main.h"
/**
 * custom_print_octal - Handles printing octal numbers
 * @num: The unsigned integer to be printed in octal
 *
 * Return: The number of characters printed
 */
int custom_print_octal(unsigned int num)
{
	int count = 0;
	char buffer[40];

	/* Convert the unsigned integer to an octal string */
	int i = 0;

	while (num > 0)
	{
		buffer[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}
	if (i == 0)
		buffer[i++] = '0';
	/* Print the octal string in reverse order */
	while (i > 0)
	{
		count += our_putchar(buffer[--i]);
	}
	return (count);
}
