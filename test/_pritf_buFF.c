#include <stdarg.h>  
#include <stdarg.h>
#include <stdio.h>

#define BUFF_SIZE 1024


int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    char buffer[BUFF_SIZE];
    int count = 0;
    int buff_ind = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%' || *format == 'c')
                buffer[buff_ind++] = (*format == '%') ? '%' : va_arg(args, int);
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                while (*str)
                    buffer[buff_ind++] = *str++;
            }
           /* else if (*format == 'd' || *format == 'i')
            {
                int value = va_arg(args, int);
                buff_ind += snprintf(buffer + buff_ind, BUFF_SIZE - buff_ind, "%d", value);
            }*/
        }
        else
            buffer[buff_ind++] = *format;
        if (buff_ind >= BUFF_SIZE - 1)
        {
            buffer[buff_ind] = '\0';
            printf("%s", buffer);
            buff_ind = 0;
        }
        format++;
    }
    buffer[buff_ind] = '\0';
    printf("%s", buffer);
    va_end(args);
    return count;
}
  // For standard input/output
#include <stdio.h>
int main() {
    char string[] = "Hell!";
    _printf("P: %s\n", string);
    return 0;
}