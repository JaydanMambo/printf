#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints integers number with spacifiers d, i.
 * @format: charachter string
 * Return: the value that should printed
*/

int _printf(const char *format, ...)
{
va_list args;
int  result = 0;
int value = 0;
const char *ptr = format;
va_start(args, format);
while (*ptr != '\0')
{
if (*ptr == '%')
{
ptr++;
if (*ptr == 'd' || *ptr == 'i')
{
value = va_arg(args, int);
result += _putchar(value);
}
}
else
{
result += _putchar(*ptr);
}
ptr++;
}
va_end(args);
return (result);
}
