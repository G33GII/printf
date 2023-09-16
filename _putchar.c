#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 * description - print putchar
 *
 * Return: 0
 */
int _putchar(char a)
{
	return (write (1, &a, 1));
}