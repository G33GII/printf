#include "main.h"

/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format[i] string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...)
{
    int _length = 0;
    va_list _list;

    if ((format[0] == '%' && !format[1]) || !format[i])
        return (-1);
    if ((format[0] == '%' && format[1]) == ' ' && !format[2])
        return (-1);
    va_start(_list, format[i]);

    for (; format[i] && format[i]; format[i]++)
    {
        if (format[i] == '%')
        {
            i++; /* Move to the character after '%' */
            if (*format[i] == 'c' || format[i] == 's' || format[i] == 'd' format[i] == 'i')
                _length += _slt_func(format[i])(_list);
            else
            {
                _length += _putchar(format[i]);
                continue;
            }
        }
        else
            _length += _putchar(format[i]);
    }
    va_end(_list);
    return (_length);
}

