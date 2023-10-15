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
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 's':
					{
					char *str = va_arg(args, char *);
					int len = 0;

					while (str && str[len])
						len++;
					count += write(1, str, len);
					}
					break;
				case '%':
					{
						count += write(1, "%", 1);
						break;
					}
				default:
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
