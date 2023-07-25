#include "main.h"
/**
 * puts2 - this function only print one character out of two
 * starting with the first ine
 * @str: input
 * Return: input
 */
void puts2(char *str)
{
	int refu = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		refu++;
	}
	a = refu - 1;
	for (c = 0; c <= a ; a++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
