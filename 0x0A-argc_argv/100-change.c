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
	int i, checker, a;

	i = 0, a = 0, checker = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		a = isdigit(*(s + i));
		if (a == 0)
		{
			checker = 0;
			break;
		}
	}
	return (checker);
}
/**
 * main - this the entry point in our program
 * @argc: Counts the number of arguments that go into main
 * @argv: it is an array of pointers to arrays of character objects
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int j, x, coins, cents, y;
	int c[5] = {25, 10, 5, 2, 1};

	x = 1, j = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			x = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					y = cents / c[j];
					if (y == 0)
					{
						j++;
					}
					else
					{
						coins += y;
						cents -= (y * c[j]);
					}
				}
			}
		}
	}
	if (x == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (x);
}
