#include "main.h"

/**
 * print_num - Print a number to the standard output.
 * @n: The number to print.
 * @c: Number count variable
 * Return: The number of characters printed.
 */
int print_num(long n, int c)
{
	if (n < 0)
	{
		putchar_wrapper('-');
		c++;
		n *= -1;
	}

	if (n / 10)
		c = print_num(n / 10, c);

	putchar_wrapper(n % 10 + '0');
	return (c + 1);
}
