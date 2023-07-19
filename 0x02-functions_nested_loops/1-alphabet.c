include "main.h"

/**
 * print_alpahbet - pirnt all alphabet in lowercase mode
 */

void print_aplhabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
