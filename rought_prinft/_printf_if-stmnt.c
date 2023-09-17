#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char a) {
    write(1, &a, 1);
    return 1;
}

void _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i]; i++) {
        if (format[i] == '%') {
            i++;
            if (format[i] == 'c') {
                _putchar(va_arg(args, int));
            } else if (format[i] == 's') {
                _pritn_str_(format[i])
                }
           /* } else if (format[i] == 'd') {
                int d = va_arg(args, int);
                if (d < 0) _putchar('-'), d = -d;
                if (d == 0) _putchar('0');
                int div = 1;
                while (div <= d / 10) div *= 10;
                while (div > 0) _putchar(d / div % 10 + '0'), div /= 10;
            } else if (format[i] == 'f') {
                double f = va_arg(args, double);
                if (f < 0) _putchar('-'), f = -f;
                int intPart = (int)f;
                if (intPart == 0) _putchar('0');
                while (intPart > 0) _putchar(intPart % 10 + '0'), intPart /= 10;
                _putchar('.');
                for (int j = 0; j < 6; j++) {
                    f -= (int)f;
                    f *= 10;
                    _putchar((int)f + '0');
                }
            }*/
        } else {
            _putchar(format[i]);
        }
    }

    va_end(args);
}

int main(void) {
    _printf("printf\n");
    _printf("String:[%s]\n", "string !");
    _printf("C:[%c]\n", 'H');
    return 0;
}