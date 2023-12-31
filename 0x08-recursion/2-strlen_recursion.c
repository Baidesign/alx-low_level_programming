#include "main.h"

/**
 * _strlen_recursion - it is a function that return the length of a string.
 * @s: Our string.
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
		return (0);

	length = _strlen_recursion(s + 1);

	return (length + 1);
}
