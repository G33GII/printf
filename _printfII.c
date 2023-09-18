#include "main.h"
/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...)
{
	int grry_count = 0;             /* Character count in the buffer */
	char _bff_[_bff_sz];            /* Buffer to store formatted string */
	va_list _list_;                 /* Initialize a variable argument list */
	const char *fmt_ptr = format;   /* Pointer to the format string */

	va_start(_list_, format);       /* Start processing the variable arguments */

	if (format)
	{
		while (*fmt_ptr)
		{
			if (*fmt_ptr == '%')
			{
				fmt_ptr++; /* Move to the character after '%' */

				if (*fmt_ptr == 'c') /* Character format specifier */
				{
					_bff_[grry_count++] = va_arg(_list_, int);
				}
				else if (*fmt_ptr == 's') /* String format specifier */
				{
					char *str = va_arg(_list_, char *);

					for (; *str; str++)
						_bff_[grry_count++] = *str;
				}
			}
			else
				_bff_[grry_count++] = (*fmt_ptr); /* Normal character */
			fmt_ptr++; /* Move to the next character in the format string */
		}
	}
	_bff_[grry_count] = '\0'; /* Null-terminate the buffer */
	_print_str_(_bff_); /* Print the formatted string */
	va_end(_list_); /* End processing of variable arguments */
	return (grry_count); /* Return the total character count */
}
