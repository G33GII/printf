#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * description - print _putchar_
 *
 * Return: 0
 */
int _putchar_(char p)
{
	return (write (1, &p, 1));
}
