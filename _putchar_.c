#include "main.h"
#include <unistd.h>

/**
 * _putchar_ - prototype to print characters
 * @p: character
 *
 * Return: 0
 */
int _putchar_(char _p)
{
	return (write(1, &_p, 1));
}
