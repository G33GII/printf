#include "main.h"
/**
 * custom_octal_format -  convert an unsigned integer to an octal rep
 * @value: value
 * Return: 0
 *
 */
int custom_octal_format(unsigned int value)
{
	char octal_buffer[32];
	int octal_length = 0, i;

	if (value == 0)
	{
		_putchar('0');
		return (1);
	}
	while (value > 0)
	{
		octal_buffer[octal_length++] = '0' + (value % 8);
		value /= 8;
	}

	for (i = octal_length - 1; i >= 0; i--)
	{
		_putchar(octal_buffer[i]);
	}

	return (octal_length);
}
/**
 * o_func - octal representation function
 * @_list: variable name
 * Return: 0s
 */
int o_func(va_list _list)
{
	unsigned int _v = va_arg(_list, unsigned int);

	int octal_length = custom_octal_format(_v);

	return (octal_length);
}
