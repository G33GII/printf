#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * write output to stdout, the standard output stream.
 * You need to handle the following conversion specifiers: c, s, %.
 * Returns: the number of characters printed (excluding the null byte used to end output to strings).
 * 
 */

/* ============================= _putchar_ ============================= */
/**
 * _putchar_ - Print a single character to the standard output.
 * @a: The character to print.
 * Return: 1 on success, -1 on failure.
 */
int _putchar_(char p)
{
	/* Write a single character to the standard output */
	write(1, &p, 1);
	return (1);
}

/* ============================= _print_str_ ============================= */
/**
 * _print_str_ - Print a string to the standard output.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
int _print_str_(const char *_s)
{
	int _length_
		= 0;
	while (*_s)
	{
		_length_
			+= _putchar_(*_s);
		_s++;
	}
	return (_length_);
}

/* ============================= _printf ============================= */
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
					case 'c':
						/* Handle character format specifier */
						_length_ += _putchar_(va_arg(_list_, int));
						break;
					case 's':
						{
							/* Handle string format specifier */
							char *_str_ = va_arg(_list_, char *);
							_length_ += _print_str_(_str_);
							break;
						}
					default:
						break;
				}
			}
			else
			{
				/* Print a character that is not part of a format specifier */
				_putchar_(*fmt_ptr);
				_length_++;
			}
			fmt_ptr++;
		}
	}
	va_end(_list_); /* End processing of variable arguments */
	return (_length_); /* Return the total number of characters printed */
}


/* ============================= main ============================= */
/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	int _length_ = 0;

	/* Testing the custom _printf function */
	_length_ += _printf("printf\n");
	_length_ += _printf("String:[%s]\n", "string !");
	_length_ += _printf("C:[%c]\n", 'H');

	return (0);
}
/* ============================= main ============================= */

