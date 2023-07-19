#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

