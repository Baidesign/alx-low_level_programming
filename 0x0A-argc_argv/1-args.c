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
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
