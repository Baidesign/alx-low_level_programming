#include "main.h"
#include <unistd.h>
/**
 * _isalpha - look if the given character is lower case.
 * @c: character to test.
 *
 * Return: it will return one if true and 0 if false.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

