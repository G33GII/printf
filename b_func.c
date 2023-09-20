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
	size_t x, h;
	int binary[32]; /* Assuming 32-bit integers */
	int dx = 0, i;

	x = va_arg(_list, int);
	if (x > INT_MAX)
		return (-1); /* Return -1 if input is zero */
	if (x == 0)
	{
		h = x + '0';
		write(1, &h, 1);
		return (0);
	}
	/* Convert the integer to binary */
	while (x > 0)
	{
		binary[dx++] = x % 2;
		x /= 2;
	}
	if (dx >= 32)
	{
		return (-1); /* Return -1 if input is zero */
	}
	/* Print the binary representation in reverse order */
	for (i = dx - 1; i >= 0; i--)
	{
		int z = binary[i] + 48; /* Convert 0/1 to '0'/'1' */

		write(1, &z, 1);
	}
	return (dx); /* Return the count of binary digits printed */
}
