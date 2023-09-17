#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * _putchar - Print a single character to the standard output.
 * @a: The character to print.
 * Return: 1 on success, -1 on failure.
 */
int _putchar(char a)
{
    /* Write a single character to the standard output */
    write(1, &a, 1);
    return (1);
}

/**
 * print_str - Print a string to the standard output.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
int print_str(const char *s)
{
    int len = 0;
    while (*s)
    {
        len += _putchar(*s);
        s++;
    }
    return (len);
}

/**
 * _printf - Custom printf function supporting %c and %s format specifiers.
 * @format: The format string.
 * Return: The total number of characters printed.
 */
int _printf(const char *const format, ...)
{
    int len = 0;
    va_list quarrel; /* Initialize a variable argument list */
    const char *fmt_ptr = format;

    va_start(quarrel, format); /* Start processing the variable arguments */
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
                        len += _putchar(va_arg(quarrel, int));
                        break;
                    case 's':
                    {
                        /* Handle string format specifier */
                        char *str = va_arg(quarrel, char *);
                        len += print_str(str);
                        break;
                    }
                    default:
                        break;
                }
            }
            else
            {
                /* Print a character that is not part of a format specifier */
                _putchar(*fmt_ptr);
                len++;
            }
            fmt_ptr++;
        }
    }
    va_end(quarrel); /* End processing of variable arguments */
    return (len);    /* Return the total number of characters printed */
}

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
    int len = 0;

    /* Testing the custom _printf function */
    len += _printf("printf\n");
    len += _printf("String:[%s]\n", "string !");
    len += _printf("C:[%c]\n", 'H');

    return (len);
}
