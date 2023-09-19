#include "main.h"

/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 *
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	const char *fmt_ptr = format;
	int length = 0;           /* Total character count */
	va_list list;             /* Argument list */

	va_start(list, format);   /* Initialize argument list */
	if (format == NULL || !fmt_ptr)
		return (-1);
	for (; *fmt_ptr; fmt_ptr++)
	{
		if (*fmt_ptr == '%')
		{
			fmt_ptr++; /* Move to the character after '%' */

			if (*fmt_ptr == '%')
			{
				/* Handle "%%" by printing a single '%' character */
				length += putchar_wrapper('%');
				if (*fmt_ptr !=  '%')
                	length += putchar_wrapper(*fmt_ptr);
				continue; /* Move to the next character */
			}
/* Use the select_format_specifier function to select the appropriate handler*/
			length += select_format_specifier(list, *fmt_ptr);
		} else
		{
			length += putchar_wrapper(*fmt_ptr);
		}
	}
	va_end(list);
	return (length);
}
