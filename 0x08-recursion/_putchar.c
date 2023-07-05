#include <unistd.h>

/**
 * my_putchar.c file
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
