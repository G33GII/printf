#include "main.h"
/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...)
{
	int _length_ = 0;
	va_list _list_; /* Initialize a variable argument list */
	const char *fmt_ptr = format;

	va_start(_list_, format); /* Start processing the variable arguments */
	if (format)
	{
		while (*fmt_ptr)
		{
			if (*fmt_ptr == '%')
			{
				fmt_ptr++;
				switch (*fmt_ptr)
				{
					case 'c': /* Handle character format specifier */
						_length_ += _putchar_(va_arg(_list_, int));
						break;
					case 's': /* Handle string format specifier */
						{
							char *_str_ = va_arg(_list_, char *);

							_length_ += _print_str_(_str_);
							break;
						}
					default:
						break;
				}
			}
			else
			{ /* Print a character not part of a format specifier */
				_putchar_(*fmt_ptr);
				_length_++;
			}
			fmt_ptr++;
		}
	}
	va_end(_list_); /* End processing of variable arguments */
	return (_length_); /* Return the total number of characters printed */
}
