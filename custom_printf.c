#include <stdarg.h>
#include "main.h"
/**
 * _printf - A custom printf function.
 * @format: The format string
 *
 * Return: The number of characters printed, without null byte
 */
int _printf(const char *format, ...)
{
	va_list lists;
	int i = 0, print_count = 0, sign = 0;

	if (format)
	{
		va_start(lists, format);
		for (; format[i] != '\0'; i++)
		{
			if (!sign)
			{
				if (format[i] != '%')
					print_count += our_putchar(format[i]);
				else
					sign = 1;
			}
			else
			{
				switch (format[i])
				{
					case 's':
						print_count += custom_print_str(va_arg(lists, char*));
						break;
					case 'c':
						print_count += our_putchar(va_arg(lists, int));
						break;
					case '\0':
						return (-1);
					case '%':
						print_count += our_putchar('%');
						break;
					default:
						print_count += our_putchar('%');
						print_count += our_putchar(format[i]);
				}
				sign = 0;
			}
		}
		va_end(lists);
	}
	else
	{
		return (-1);
	}
	return (print_count);
}
