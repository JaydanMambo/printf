#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * custom_print_binary - Convert an unsigned int to binary and print it.
 * @n: The unsigned integer to be converted to binary.
 *
 * Return: The number of characters printed, or -1 if an error occurscha.
 */
int custom_print_binary(unsigned int n)
{
  int count = 0;
  int i = 0;
  int bits = (8 * sizeof(n));

  if (n == 0)
    count += our_putchar('0');
  else
    {

      char *binary = malloc(bits + 1);
      if (binary == NULL)
	{
	  return (-1); /* error in allocated memory */
	}

      /* To hold the binary representation by declar i (plus null terminator) */

      /* Convert the unsigned integer to binary */
      while (n > 0 && i < bits)
	{
	  binary[i] = (n & 1) + '0';
	  /* Extract the least significant bit and convert it to a character */
	  n >>= 1; /* Right-shift to process the next bit */
	  i++;
	}
      if (i == 0)
	binary[i++] = '0';
      if (i >= bits)
	i = bits - 1;
      while (i >= 0)
	{
	  count += our_putchar(binary[i]);
	  i--;
	}
      free (binary);
    }
  if (count < 0)
    return (-1); /* Error occurred in our_putchar */
  return (count);
}
