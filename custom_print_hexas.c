#include "main.h"
/**
 * custom_print_hex - Handles printing hexadecimal numbers
 * @num: The unsigned integer to be printed in hexadecimal
 * @base_char: The base character ('a' for lowercase, 'A' for uppercase)
 *
 * Return: The number of characters printed
 */
int custom_print_hex(unsigned int num, char base_char)
{
	int count = 0;
	char buffer[40];
	int remainder;

	/* Convert the unsigned integer to a hexadecimal string */
	int i = 0;

	while (num > 0)
	{
		remainder = num % 16;
		buffer[i] = (remainder < 10) ? (remainder + '0') :
			(base_char + (remainder - 10));
		num /= 16;
		i++;
	}
	if (i == 0)
		buffer[i++] = '0';
	/* Print the hexadecimal string in reverse order */
	while (i > 0)
		count += our_putchar(buffer[--i]);
	return (count);
}
