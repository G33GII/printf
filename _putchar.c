#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * description - print _putchar_
 *
 * Return: 0
 */
int _putchar_(char a)
{
	return (write (1, &a, 1));
}