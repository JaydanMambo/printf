#include "main.h"
/**
 * custom_print_S - Prints a string with special formatting
 *			for non-printable characters
 * @str: The input string
 *
 * Return: The number of characters printed
 */
int custom_print_S(const char *str)
{
	int length = 0;
	int i;

	for (i = 0; *(str + i); i++)
	{
		if ((*(str + i) >= 0 && *(str + i) <= 32) || (*(str + i) >= 127))
		{
			our_putchar('\\');
			our_putchar('x');
			if (*(str + i) <= 16)
				our_putchar('0');
			i += custom_print_hex(str[i], 'A');
		}
		else
		{
			our_putchar(*(str + i));
		}
		length++;
	}
	return (length);
}
