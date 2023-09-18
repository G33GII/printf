#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/*======================================================*/
typedef struct _lst_arr
{
    char _chars;
    int (*_func)(va_list arg);
}_lst_arr;

/*======================================================*/
int _putchar(char _p)
{
    return (write (1, &_p, 1));
}

/*======================================================*/
int s_func(va_list _list)
{
  int _l = 0;
  char *_s = va_arg(_list, char *);
  
  if (_s == NULL)
      _s = "(null)";
  for (; *_s; _s++,_l++)    
      _putchar(*_s);
  return (_l);
}

/*======================================================*/
int c_func(va_list _list)
{
  
    char _c = va_arg(_list, int);
    if (_c == NULL)
      return (0);
    return (_putchar(_c)); 
}


/*======================================================*/
int (*_slt_func(char s))(va_list arg)
{
    int i;
    _lst_arr fmt_sp[] = {
        {'c', &c_func},
        {'s', &s_func},
       
        {NULL, NULL}
                        };
    for (i = 0; fmt_sp[i]._chars; i++)
     if (s == fmt_sp[i]._chars)
       return fmt_sp[i]._func;
   
    return (0);
}

/*======================================================*/
int _printf(const char *const format, ...)
{
    int _length = 0;

    va_list _list; 
    const char *_fmt = format;
    
    if (format == NULL)
        return (-1);

    va_start(_list, format);

    for (; *_fmt && format; _fmt++)
    {
        if (*_fmt == '%')
        {
            _fmt++; /* Move to the character after '%' */
            if (*_fmt == 'c' || *_fmt == 's')
                _length += _slt_func(*_fmt)(_list);
            else
            {
                _length += (_putchar('%'), _putchar(*_fmt));
                continue;
            } 
        }
        else
            _length += _putchar(*_fmt); 
    }
    va_end(_list); 
    return (_length);
}

/*======================================================*/
int main(void)
{
    _printf("printf\n");
    _printf("String:[%s]\n", "string!");
    _printf("C:[%c]\n", 'H');

    return (0);
}