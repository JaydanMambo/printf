#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: The format string.
 * @...: Variable number of arguments.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printf_counter = 0;
	va_list arglist;

	if (format == NULL)
		return (98);
	va_start(arglist, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printf_counter++;
		}
		else
		{
			format++;
			while (*format != '\0')
			{
				if (*format == '%')
				{
					write(1, format, 1);
					printf_counter++;
				}
				else if (*format == 'c')
				{
					char c = va_arg(arglist, int);

					write(1, &c, 1);
					printf_counter++;
				}
				else if (*format == 's')
				{
					char *st = va_arg(arglist, char*);
					int st_length = 0;

					while (st[st_length] != '\0')
						st_length++;
					write(1, st, st_length);
					printf_counter += st_length;
				}
			}
		}
		format;
	}
	va_end(arglist);
	return (printf_counter);
}

