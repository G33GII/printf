#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   /* int len;
    int len2;
   

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    addr = (void *)0x7ffe637541f0;
    printf("Length:[%d, %i]\n", len, len);
    _printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);

    printf("Length:[%d, %i]\n", len, len);
    _printf("Length:[%d, %i]\n", len2, len2);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);*/
    /*_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]\n", 'H');
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr); 
    len = printf("Percent:[%%]\n");
    len2 = _printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len);
    _printf("Len:[%d]\n\n", len2);
   _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    
    printf("Unknown:[%%%%%%]\n");
    _printf("Unknown:[%%%%%%]\n");

    printf("Unknown:[%c]\n", 48);
    _printf("Unknown:[%c]\n", 48);

    printf("Unknown:%\n");
    _printf("Unknown:%\n");
    
   printf(NULL);
    _printf(NULL);*/

  _printf("%b\n", 98);
    _printf("%b\n", 0);
   _printf("%b\n", 1024); 
   _printf("%b\n", -1024);
    /*printf("b%\n", 48);*/
    return (0);
}
