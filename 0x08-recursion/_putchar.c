#include <unistd.h>

/**
 * -putchar - it write char c to standout
 *  @c: Character to print
 *  Return: On success 1.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
