#include "main.h"
/**
 * print_sign - prints the sign of the given number +/-
 * @n: Number to be tested
 *
 *
 * Return: 1 if positive and > 0, 0 if == 0, and -1 if neg or < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

