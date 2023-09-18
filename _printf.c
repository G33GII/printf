#include "main.h"

/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...)
{
	int _length = 0;

	va_list _list;
	const char *_fmt = format;

	if (format == NULL)
		return (-1);

	va_start(_list, format);

	for (; *_fmt && format; _fmt++)
	{
		if (*_fmt == '%')
		{
			_fmt++; /* Move to the character after '%' */
			if (*_fmt == 'c' || *_fmt == 's')
				_length += _slt_func(*_fmt)(_list);
			else
			{
				_length += (_putchar('%'), _putchar(*_fmt));
				continue;
			}
		}
		else
			_length += _putchar(*_fmt);
	}
	va_end(_list);
	return (_length);
}
