#include "main.h"

/**
 * _slt_func - Print a string to the standard output.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
int (*_slt_func(char s))(va_list _list)
{
	int i;

	_lst_arr fmt_sp[] = {
		{'c', &c_func},
		{'s', &s_func},
		{'d', &d_func},
		{'i', &d_func},
		{'b', &b_func},
		{'u', &u_func},
		{'o', &o_func},
		{'x', &x_func},
		{'X', &X_func},
		{'\0', NULL}
	};
	for (i = 0; fmt_sp[i]._chars; i++)
		if (s == fmt_sp[i]._chars)
			return (fmt_sp[i]._func);

	return (0);
}
