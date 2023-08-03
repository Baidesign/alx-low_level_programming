#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: it represent the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		_putchar('\n');
}
