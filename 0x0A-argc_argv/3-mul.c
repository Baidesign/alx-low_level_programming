#include <stdlib.h>
#include <stdio.h>
/**
 * main - this the entry point in our program
 * @argc: Counts the number of arguments that go into main
 * @argv: it is an array of pointers to arrays of character objects
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int a, b;

	b = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		b = 1;
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", a);
	}
	return (b);
}
