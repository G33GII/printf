#include "main.h"
#include <unistd.h>

/**
 * _putchar - prototype to print characters
 * @_p: character
 *
 * Return: 0
 */
int _putchar(char _p)
{
	return (write(1, &_p, 1));
}
