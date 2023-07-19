#include "main.h"
/**
 * print_alphabet - pirnt all alphabet in lowercase mode
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
