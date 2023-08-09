#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 *
 * Return: On success 1.
 * If not a number, 0 is returned.
 */
int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - this the entry point in our program
 * @argc: Counts the number of arguments that go into main
 * @argv: it is an array of pointers to arrays of character objects
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, b, c;

	c = 0, b = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				b += atoi(argv[i]);
			else
				c = 1;
		}
	}
	if (c == 0)
		printf("%i\n", b);
	else
		printf("%s\n", "Error");
	return (c);
}
