#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>
/**
 * custom_print_ptr - Prints a pointer address
 * @ptr: Pointer to be printed
 *
 * Return: The number of characters printed
 */
int custom_print_ptr(void *ptr)
{
	int count = 0;
	int pos;
	uintptr_t address;
	char hex_buffer[16];

	if (ptr)
	{
		/* Print "0x" to represent hexadecimal format */
		address = (uintptr_t)ptr;
		count += write(1, "0x", 2);

		/* Format the pointer address as a hexadecimal string */
		pos = 0;

		do {
			int digit = address & 0xF;

			hex_buffer[pos++] = (digit < 10) ? digit + '0' : digit - 10 + 'a';
			address >>= 4;
		} while (address != 0);

		/* Print the hexadecimal string in reverse order */
		while (pos > 0)
			count += write(1, &hex_buffer[--pos], 1);
	}
	else
	{
		count += write(1, "(nil)", 5);
	}
	return (count);
}


