#include "main.h"

/**
 * _puts - program prints a string to stdout
 * @s: string to print
 * _putchar print a new line
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
