#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define _bff_sz 24

int _putchar_(char p)
{
	return (write (1, &p, 1));
}

int _print_str_(const char * s)
{

	for (; *s;   s++)    
		_putchar_(*s);
	return (0);
}

int _printf(const char *const format, ...)
{

	int grry_count = 0;
	char _bff_[_bff_sz];
	va_list _list_; 
	const char *fmt_ptr = format;

	va_start(_list_, format); 
	if (format)
	{
		while (*fmt_ptr)                    
		{
			if (*fmt_ptr == '%')
			{
				fmt_ptr++;

				if (*fmt_ptr == 'c')

				{
					_bff_[grry_count++] = va_arg(_list_, int);
				}
				else if (*fmt_ptr == 's')                 
				{
					char *str = va_arg(_list_, char *);
					for (; *str; str++)
						_bff_[grry_count++] = *str;
				}
			}
			else
				_bff_[grry_count++] = (*fmt_ptr);
			fmt_ptr++;
		}
	}

	_bff_[grry_count] = '\0';
	_print_str_(_bff_);

	va_end(_list_); 
	return (grry_count); 
}

int main(void)
{
	_printf("printf\n");
	_printf("String:[%s]\n", "string!");
	_printf("C:[%c]\n", 'H');

	return (0);
}
