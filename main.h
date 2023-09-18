#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define _bff_sz 24

/**
 * main - entry point
 * description - headers
 * Return: 0
*/
int _printf(const char *format, ...);
int _putchar_(char _p);
int _print_str_(const char *_s);


#endif
