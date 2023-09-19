#include "main.h"
/**
 * hexadecimal_lowercase - print hexadecimal in lowercase
 * @value: number
 * @uppercase: uppercase letters
 * Return: 0
 */
int hexadecimal_lowercase(unsigned int value, int uppercase)
{
	char hex_buffer[32];
	int hex_length = 0, i;
	const char *hex_chars;

	if (value == 0)
	{
		_putchar('0');
		return (1);
	}

	hex_chars = (uppercase) ? "0123456789ABCDEF" : "0123456789abcdef";

	while (value > 0)
	{
		hex_buffer[hex_length++] = hex_chars[value % 16];
		value /= 16;
	}
	for (i = hex_length - 1; i >= 0; i--)
	{
		_putchar(hex_buffer[i]);
	}

	return (hex_length);
}
/**
 * x_func - prototype for lowercase hexadecimal
 * @_list: variable name
 * Return: 0
 */
int x_func(va_list _list)
{
	unsigned int _v = va_arg(_list, unsigned int);

	int hex_length = hexadecimal_lowercase(_v, 0);

	return (hex_length);
}
