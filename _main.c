#include "main.h"

/**
 * main - Entry point of the program.
 * Return: 0 on success.
 */
int main(void)
{
	int _length_ = 0;

	/* Testing the custom _printf function */
	_length_ += _printf("printf\n");
	_length_ += _printf("String:[%s]\n", "string !");
	_length_ += _printf("C:[%c]\n", 'H');

	return (0);
}
