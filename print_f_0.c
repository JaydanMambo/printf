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
    va_start(args, format);

    int count = 0;  // Initialize the character count.

    while (*format != '\0') {
        if (*format != '%') {
            write(1, format, 1);  // Write a single character to stdout
            count++;
        } else {
            format++; // Move past the '%'
            switch (*format) {
                case 'c': {
                    int c = va_arg(args, int);
                    write(1, &c, 1);  // Write the character to stdout
                    count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char *);
                    while (*str != '\0') {
                        write(1, str, 1);  // Write a character at a time
                        str++;
                        count++;
                    }
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    char num_str[12];  // Maximum integer digits + sign
                    int num_len = snprintf(num_str, sizeof(num_str), "%d", num);
                    write(1, num_str, num_len);
                    count += num_len;
                    break;
                }
                case '%':
                    write(1, "%", 1);  // Write '%' character
                    count++;
                    break;
                default:
                    write(1, "%", 1);  // Write '%' character
                    write(1, format, 1);  // Write the unsupported specifier
                    count += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return (count);
}
