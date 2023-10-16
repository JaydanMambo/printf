#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * custom_print_int - Prints an integer using recursive logic
 * @n: The integer to print
 *
 * Return: The number of characters printed.
 */
int custom_print_int(int n)
{
	int count = 0;
	int absolute_value = n;

	/* Check if n is non-zero, meaning we need to print something */
	if (n)
	{
		/* If n is negative, append a '-' character */
		/*  and make absolute_value positive */
		if (n < 0)
		{
			count += our_putchar('-');
			absolute_value = -n;
		}
		/* Recursive printing of integer digits */
		if ((absolute_value / 10) > 0)
		{
			/* Recursively print the integer part */
			count += custom_print_int(absolute_value / 10);
			/* Print the last digit character */
			count += our_putchar((absolute_value % 10) + '0');
		}
		else
		{
			/* This is the base case of recursion, print the last digit character */
			count += our_putchar(n + '0');
		}
	}
	/* Return the total count of characters printed */
	return (count);
}
