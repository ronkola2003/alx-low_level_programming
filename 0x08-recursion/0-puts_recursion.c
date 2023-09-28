#include "main.h"

/**
 * _puts_recursion - prints s string
 * @s: string to print
 * Return: 0
 */
void _puts_recursion(char *s);
{
	int s
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar("%d\n", s);
}
