#include "main.h"

/**
 * x_func - Print an integer as a hexadecimal number to the standard output.
 * @list: A va_list containing the integer to be printed.
 * Return: The number of characters printed.
 */
int x_func(va_list list)
{
	int value = va_arg(list, int);
	int length = 0, i;
	char hex_digits[] = "0123456789abcdef";
	char hex_buffer[12]; /* Buffer to hold the hexadecimal representation */

	if (value < 0)
	{
		putchar_wrapper('-');
		length++;
		value *= -1;
	}

	/* Convert the integer to hexadecimal and store it in hex_buffer */
	i = 0;
	do {
		hex_buffer[i++] = hex_digits[value % 16];
		value /= 16;
	} while (value > 0);

	/* Print the hexadecimal number in reverse order */
	for (i--; i >= 0; i--)
	{
		putchar_wrapper(hex_buffer[i]);
		length++;
	}

	return (length);
}
