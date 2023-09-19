#include "main.h"

/**
 * b_func - Print the binary representation of an integer.
 * @_list: A va_list containing the integer to be printed.
 *
 * This function converts the integer
 * to binary and prints it to standard output.
 * It also returns the count of binary digits.
 *
 * Return: The count of binary digits printed
 * (including the newline character).
 */
int b_func(va_list _list)
{
	size_t x;

	x = va_arg(_list, int);
	if (x == 0)
	{
		return (-1); /* Return -1 if input is zero */
	}

	int binary[32]; /* Assuming 32-bit integers */
	int dx = 0;

	/* Convert the integer to binary */
	while (x > 0)
	{
		binary[dx++] = x % 2;
		x /= 2;
	}

	/* Print the binary representation in reverse order */
	for (int i = dx - 1; i >= 0; i--)
	{
		int z = binary[i] + 48; /* Convert 0/1 to '0'/'1' */

		write(1, &z, 1);
	}
	dx += write(1, "\n", 1); /* Print newline and update count */
	return (dx); /* Return the count of binary digits printed */
}
