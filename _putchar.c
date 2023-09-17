#include "main.h"
#include <unistd.h>

/**
 * _putchar_ - prototype to print characters
 * @p: character
 *
 * Return: 0
 */
int _putchar_(char p)
{
	return (write(1, &p, 1));
}
