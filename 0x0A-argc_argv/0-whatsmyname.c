#include <stdio.h>
#include <stdlib.h>
/**
 * main - this the entry point in our program
 * @argc: Counts the number of arguments that go into main
 * @argv: it is an array of pointers to arrays of character objects
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
