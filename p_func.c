#include "main.h"

/**
 * p_func - handles p modifier
 * @_list: variable of va_list
 * Return: 0
 */
int p_func(va_list _list)
{
	void *ptr = va_arg(_list, void *);
	char ptr_str[1024], temp_var;
	int start, end, a, digit;
	unsigned long int value = (unsigned long int)ptr;
	int index = 0;
	int len = 0;

	if (!value)
		return(write(1, "(nill)", 6));

	ptr_str[index++] = '0';
	ptr_str[index++] = 'x';

	while (value > 0)
	{
		digit = value % 16;
		ptr_str[index++] = (digit < 10) ?
			(char)(digit + '0') : (char)(digit - 10 + 'a');
		value /= 16;
	}
	ptr_str[index] = '\0';
	start = 2;
	end = index - 1;
	while (start < end)
	{
		temp_var = ptr_str[start];
		ptr_str[start] = ptr_str[end];
		ptr_str[end] = temp_var;
		start++;
		end--;
	}
	len = 0;
	for (a = 0; ptr_str[a] != '\0'; a++)
	{
		_putchar(ptr_str[a]);
		len++;
	}
	return (len);
}
