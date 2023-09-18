
#include "main.h"
/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...);
int _printf(const char *const format, ...)
{
	int _buff_ct = 0, _length_;             /* Character count in the buffer */
	char _bff_[_bff_sz];            /* Buffer to store formatted string */
	va_list _list_;                 /* Initialize a variable argument list */
	const char *fmt_ptr = format;   /* Pointer to the format string */

	if (format == NULL)
		return (-11);

	va_start(_list_, format);       /* Start processing the variable arguments */

	for (; *fmt_ptr && format; fmt_ptr++)
	{
		if (*fmt_ptr == '%')
		{
			fmt_ptr++; /* Move to the character after '%' */
			if (*fmt_ptr == '%')
				_bff_[_buff_ct++] = '%';
			else if (_buff_ct == _bff_sz)
				_print_str_(_bff_);
			else if (*fmt_ptr == 'c') /* Character format specifier */
				_bff_[_buff_ct++] = va_arg(_list_, int);
			else if (*fmt_ptr == 's') /* String format specifier */
			{
				char *str = va_arg(_list_, char *);

				for (; *str; str++)
					_bff_[_buff_ct++] = *str;
			}
			else
				_bff_[_buff_ct++] = '%';
				_bff_[_buff_ct++] = (*fmt_ptr);
		}
		else
			_bff_[_buff_ct++] = (*fmt_ptr); /* Normal character */

		if (_buff_ct >= _bff_sz - 1)
		{
			_bff_[_buff_ct] = '\0';
			_print_str_(_bff_);
			_length_ += _buff_ct;
			_buff_ct = 0;
		}
	}
	_bff_[_buff_ct] = '\0'; /* Null-terminate the buffer */
	_print_str_(_bff_); /* Print the formatted string */
	va_end(_list_); /* End processing of variable arguments */
	return (_buff_ct); /* Return the total character count */
}
