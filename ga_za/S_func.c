#include "main.h"

/**
 * S_func - Format and print a string, with non-printable characters escaped.
 * @_list: The list of arguments.
 *
 * Return: The length of the formatted string.
 */
int S_func(va_list _list)
{
	int length = 0; /* Initialize the length counter. */
	char *str = va_arg(_list, char*); /* Get the string argument from the list. */

	if (!str)
		str = "(null)"; /* If the string is NULL, set it to "(null)". */

	while (*str) /* Loop through each character in the string. */
	{
		if (*str < 32 || *str >= 127) /* Check if the character is non-printable. */
		{   /* Hexadecimal mapping for non-printable characters. */
			char hex_mapping[] = "0123456789ABCDEF";

			if (*str < 0)
				*str *= -1; /* Make sure the character is positive. */

			/* Print the escape sequence for the non-printable character. */
			length += _putchar('\\');
			length += _putchar('x');
			length += _putchar(hex_mapping[*str / 16]);
			length += _putchar(hex_mapping[*str % 16]);
		}
		else
		{
			/* Print the printable character. */
			length += _putchar(*str);
		}
		str++; /* Move to the next character in the string. */
	}
	return (length); /* Return the total length of the formatted string. */
}
