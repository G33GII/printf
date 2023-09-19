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
int print_num(long _n, int _c)
 {
   if (_n < 0)
   {
    _putchar('-');
    _c++;
    _n *= -1;
   }
   
  if (_n/10)
    _c = print_num(_n/10, _c);

  _putchar(_n%10 + '0');
  return (_c + 1);
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
int d_func(va_list _list)
{
  int _c = 0;
   int _v = va_arg(_list, int);
   _c = print_num(_v, 0);
   return (_c);
}

/*======================================================*/
int c_func(va_list _list)
{
  
    char _c = va_arg(_list, int);
   
    return (_putchar(_c)); 
}


/*======================================================*/
int (*_slt_func(char s))(va_list arg)
{
    int i;
    _lst_arr fmt_sp[] = {
        {'c', &c_func},
        {'s', &s_func},
       {'d', &d_func},
       {'i', &d_func},
        {'\0', NULL}
                        };
    for (i = 0; fmt_sp[i]._chars; i++)
     if (s == fmt_sp[i]._chars)
       return fmt_sp[i]._func;
   
    return (0);
}

/*======================================================*/
int _printf(const char *const format, ...)
{
    int _length = 0, buff_ct = 0;
    char buff[buffsize];
    va_list _list; 
    const char *fmt_ptr = format;
    
    if (format == NULL)
        return (-1);

    va_start(_list, format);

    for (; *fmt_ptr && format; fmt_ptr++)
    {
        if (*fmt_ptr == '%')
        {
            fmt_ptr++; /* Move to the character after '%' */
            buff[buff_ct++] = '%';

            if (*fmt_ptr == 'c' || *fmt_ptr == 's' || *fmt_ptr == 'i' || *fmt_ptr == 'd')
            buff[buff_ct++] += _slt_func(*fmt_ptr)(_list);
            else
            {
              _length += _putchar(*fmt_ptr);
              continue;
            }
        }
        else
        {
            if (buff_ct == buffsize)
            {
                _length += s_func(_list);
                buff_ct = 0;
            }
            buff[buff_ct++] = *fmt_ptr;
            _length++;
        }

        if (buff_ct == buffsize - 1)
        {
            buff[buff_ct] = '\0';
            _length += s_func(_list);
            buff_ct = 0;
        }
    }

    buff[buff_ct] = '\0';
    _length += s_func(_list);
    va_end(_list);
    return _length;
} 


/*======================================================*/
int main(void)
{
    printf("p: %d%%.\n", 100);
    _printf("p: %d%%.\n", 100);
   
    return (0);
}