#include "main.h"

/**
 * 
 * 
 * Custom snprintf-like function to format and write data to a string buffer
 * @str:
 * @format:
 * Return:
 */
int my_snprintf(char *str, size_t size, const char *format, ...) {
    int written = 0;      /* Total characters written */
    va_list args;         /* Variable argument list */
    va_start(args, format);

    while (*format && size > 1) {
        if (*format == '%') {
            format++;      /* Move past '%' */

            /* Handle integer format specifier (%d) */
            if (*format == 'd') {
                int value = va_arg(args, int);
                int digits = snprintf(str, size, "%d", value);
                str += digits;
                size -= digits;
                written += digits;
            }

            /* Handle string format specifier (%s) */
            else if (*format == 's') {
                const char *s = va_arg(args, const char *);
                while (*s && size > 1) {
                    *str++ = *s++;
                    size--;
                    written++;
                }
            }

            format++;      /* Move to the next character */
        } else {
            /* Copy non-format characters */
            *str++ = *format++;
            size--;
            written++;
        }
    }

    va_end(args);

    /* Null-terminate the string */
    if (size > 0) {
        *str = '\0';
    }

    return (written);
}


/**
 * S_func -
 * @_list:
 * 
 * 
*/
int S_func(va_list _list)
{
    int length = 0;
    char *x = va_arg(_list, char*);
    char formatted[1024];

    while (*x)
    {
        if (*x < 32 || *x >= 127)
        {
            /* Non-printable character */
            my_snprintf(formatted, sizeof(formatted), "\\x%02X", (unsigned char)*x);
            fputs(formatted, stdout); /* Print the formatted string */
        } else {
            /* Printable character */
            putchar(*x);
        }
        x++;
    }
return (length);

}

