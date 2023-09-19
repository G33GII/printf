#include "main.h"

/**
 * select_format_specifier - Selects and executes the
 * appropriate format specifier function.
 * @list: The va_list containing the arguments.
 * @format: The format specifier character.
 *
 * This function chooses the appropriate format specifier function based on
 * the provided format character and executes it with the provided arguments.
 *
 * Return: The number of characters printed by the selected function.
 */
int select_format_specifier(va_list list, char format)
{
	FormatSpecifier format_specifiers[] = {
		{'c', &c_func},
		{'s', &s_func},
		{'d', &d_func},
		{'i', &d_func},
		{'x', &x_func}, /* Add support for %x */
		{'\0', NULL}
	};

	int length = 0;
	int i, found;

	for (i = 0, found = 0; format_specifiers[i].format; i++)
	{
		if (format == format_specifiers[i].format)
		{
			length += format_specifiers[i].func(list);
			found = 1;
			break;
		}
	}

	if (!found)
	{
		putchar_wrapper('%');
		if (format !=  '%')
			putchar_wrapper(format);
		length += 2;
	}

	else
	{
		length += putchar_wrapper(format);
	}

	return (length);
}
