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
 /* long int res = INT_MAX;

	   int len;
	   int len2;
	   long int l = UINT_MAX + 1024;
	   long int res = (long int)INT_MAX * 2;
	==================================================================
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
	   printf("Unsigned octal:[%o]\n", ui);
	  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
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
	  _printf(NULL);
	  =============================================================
	  _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	  _printf("%b", UINT_MAX);
	  _printf("%b\n", 98);
	  _printf("%b\n", 0);
	  _printf("%b\n", 1024); 
	  _printf("%b\n", -1024);
	  =========================================================
	  printf("%x\n", 1024);
	  _printf("%x\n", 1024);
	  printf("%x\n", -1024);
	  _printf("%x\n", -1024);
	  printf("%x\n", 0);
	  _printf("%x\n", 0);
	  printf("%x\n", UINT_MAX);
	  _printf("%x\n", UINT_MAX);
	  printf("%x\n", l);
	  _printf("%x\n", l);
	  printf("There is %x bytes in %x KB\n", 1024, 1);
	  _printf("There is %x bytes in %x KB\n", 1024, 1);
	  printf("%x - %x = %x\n", 2048, 1024, 1024);
	  _printf("%x - %x = %x\n", 2048, 1024, 1024);
	  printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	  _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	  printf("%X\n", 1024);
	  _printf("%X\n", 1024);
	  printf("%X\n", -1024);
	  _printf("%X\n", -1024);
	  printf("%X\n", 0);
	  _printf("%X\n", 0);
	  printf("%X\n", UINT_MAX);
	  _printf("%X\n", UINT_MAX);
	  printf("There is %X bytes in %X KB\n", 1024, 1);
	  _printf("There is %X bytes in %X KB\n", 1024, 1);
	  printf("%X - %X = %X\n", 2048, 1024, 1024);
	  _printf("%X - %X = %X\n", 2048, 1024, 1024);
	  printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	  _printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	  printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	  _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	  printf("uuoxxX%xuoXo\n", 1024);
	  _printf("uuoxxX%xuoXo\n", 1024);*/
	 
	/* \x01\x02\x03\x04\x05\x06\x07\x01\x02\x03\x04\x05\x06\x07 
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");

	Best\x0ASchool 
	_printf("%S\n", "Best\nSchool");

	Could you print some non-prntable characters?
	Sure:\x1F\x7F\x0A
	Thanks!
	Could you print some non-prntable characters?
	Sure:\x1F\x7F\x0A
	Thanks! 
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");

	_printf("%p\n\n", (void *)0x7fff5100b608);
	_printf("%p\n\n", NULL);
	_printf("Can you print an address?\n%p\nNice!\n\n", (void *)0x7fff5100b6f8);
	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	_printf("Can you print an address?\n%p\nNice!\n\n", (void *)-1);
	_printf("%pppp\n", (void *)0x7fff5100b6f8);*/


_printf("%+d\n", 1024);
_printf("%+d\n", -1024);
_printf("%+d\n", 0);
_printf("%+d\n", INT_MAX);
printf("%+d\n", INT_MIN);
_printf("There is %+d bytes in %+d KB\n", 1024, 1);
_printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("%+i\n", -1024);
_printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	


	return (0);
}
