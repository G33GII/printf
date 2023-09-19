#include "main.h"
#include <unistd.h>

/**
 * putchar_wrapper - prototype to print characters
 * @c: character
 *
 * Return: 0
 */
int putchar_wrapper(char c)
{
	return (write(1, &c, 1));
}
